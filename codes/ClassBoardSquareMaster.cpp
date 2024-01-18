void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418958F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__, method);
    byte_418958F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    427,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_418958D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_B2C35C(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v9);
    sub_B2C35C(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v10);
    byte_418958D = 1;
  }
  v11 = (ClassBoardSquareMaster___c__DisplayClass0_0_o *)sub_B2C42C(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v16,
                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189590 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_4189590 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_418958E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_B2C35C(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v9);
    sub_B2C35C(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_418958E = 1;
  }
  v11 = (ClassBoardSquareMaster___c__DisplayClass1_0_o *)sub_B2C42C(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v16,
                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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

  if ( (byte_4189591 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__, entity);
    byte_4189591 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}
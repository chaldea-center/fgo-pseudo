void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B075F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
    byte_42B075F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    428,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardSquareMaster___c__DisplayClass0_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_42B075D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
    sub_B52984(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_B52984(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__);
    sub_B52984(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
    byte_42B075D = 1;
  }
  v5 = (ClassBoardSquareMaster___c__DisplayClass0_0_o *)sub_B52A54(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass0_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v10,
                                           (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0760 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
    byte_42B0760 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardSquareMaster___c__DisplayClass1_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_42B075E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_B52984(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
    sub_B52984(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_B52984(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__);
    sub_B52984(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_42B075E = 1;
  }
  v5 = (ClassBoardSquareMaster___c__DisplayClass1_0_o *)sub_B52A54(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v10,
                                           (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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

  if ( (byte_42B0761 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
    byte_42B0761 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}
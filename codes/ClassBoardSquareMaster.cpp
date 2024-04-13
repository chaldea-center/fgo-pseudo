void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8A4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA8A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    428,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ClassBoardSquareMaster___c__DisplayClass0_0_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_42EA8A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v18, v19, v20);
    sub_B5D5C4(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v21, v22, v23);
    byte_42EA8A2 = 1;
  }
  v24 = (ClassBoardSquareMaster___c__DisplayClass0_0_o *)sub_B5D694(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass0_0___ctor(v24, 0LL);
  if ( !v24 )
    sub_B5D69C(v25, v26);
  v24->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v24,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v29,
                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA8A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      classBoardBaseId,
      id,
      method);
    byte_42EA8A5 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ClassBoardSquareMaster___c__DisplayClass1_0_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_42EA8A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v18, v19, v20);
    sub_B5D5C4(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v21, v22, v23);
    byte_42EA8A3 = 1;
  }
  v24 = (ClassBoardSquareMaster___c__DisplayClass1_0_o *)sub_B5D694(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  ClassBoardSquareMaster___c__DisplayClass1_0___ctor(v24, 0LL);
  if ( !v24 )
    sub_B5D69C(v25, v26);
  v24->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v24,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v29,
                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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

  if ( (byte_42EA8A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__,
      (_DWORD)entity,
      classBoardBaseId,
      *(_QWORD *)&id);
    byte_42EA8A6 = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}
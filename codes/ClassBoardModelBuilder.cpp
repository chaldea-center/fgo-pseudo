void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FB995 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v8);
    byte_40FB995 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  ClassBoardLineModel_o *v8; // x21
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_40FB993 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardLineModel_TypeInfo, line);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v7);
    byte_40FB993 = 1;
  }
  v8 = (ClassBoardLineModel_o *)sub_B170CC(ClassBoardLineModel_TypeInfo, line, method, v3, v4);
  ClassBoardLineModel___ctor(v8, line, v9);
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
  return v8;
}


ClassBoardSquareModel_o *__fastcall ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardLockModel_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x0

  if ( (byte_40FB994 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardLockModel_TypeInfo, squareEntity);
    sub_B16FFC(&ClassBoardSquareModel_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v8);
    byte_40FB994 = 1;
  }
  if ( !squareEntity )
    goto LABEL_9;
  if ( squareEntity->fields.lockId )
  {
    v9 = (ClassBoardLockModel_o *)sub_B170CC(ClassBoardLockModel_TypeInfo, squareEntity, method, v3, v4);
    ClassBoardLockModel___ctor(v9, squareEntity, v10);
  }
  else
  {
    v9 = (ClassBoardLockModel_o *)sub_B170CC(ClassBoardSquareModel_TypeInfo, squareEntity, method, v3, v4);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v9, squareEntity, v11);
  }
  squareList = this->fields.squareList;
  if ( !squareList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
  return (ClassBoardSquareModel_o *)v9;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x0

  if ( (byte_40FB98F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, v3);
    byte_40FB98F = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__),
        (squareList = this->fields.squareList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
}


void __fastcall ClassBoardModelBuilder__Make(ClassBoardModelBuilder_o *this, int32_t baseId, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ClassBoardModelBuilder__MakeSquare(this, baseId, method);
  ClassBoardModelBuilder__MakeLine(this, baseId, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardModelBuilder__MakeLine(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardLineMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x2
  ClassBoardLineEntity_array *AllEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  ClassBoardLineEntity_array *v12; // x20
  unsigned int v13; // w23
  ClassBoardLineEntity_o *v14; // x21
  IClassBoardLineModel_o *v15; // x0
  const MethodInfo *v16; // x3
  IClassBoardLineModel_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_40FB991 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardLineMaster___, *(_QWORD *)&baseId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FB991 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardLineMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  AllEntity = ClassBoardLineMaster__GetAllEntity(Master_WarQuestSelectionMaster, baseId, v7);
  if ( !AllEntity )
    goto LABEL_15;
  max_length = AllEntity->max_length;
  v12 = AllEntity;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(AllEntity, v9, v10);
        sub_B170A0();
      }
      v14 = v12->m_Items[v13];
      v15 = (IClassBoardLineModel_o *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardLineEntity_o *, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                        this,
                                        v14,
                                        this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v14 )
        break;
      v17 = v15;
      ClassBoardModelBuilder__UnionSquareLine(this, v15, v14->fields.prevSquareId, v16);
      ClassBoardModelBuilder__UnionSquareLine(this, v17, v14->fields.nextSquareId, v18);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardModelBuilder__MakeSquare(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x2
  ClassBoardSquareEntity_array *AllEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  ClassBoardSquareEntity_array *v12; // x20
  unsigned __int64 v13; // x21

  if ( (byte_40FB990 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, *(_QWORD *)&baseId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FB990 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = ClassBoardSquareMaster__GetAllEntity(Master_WarQuestSelectionMaster, baseId, v7)) == 0LL )
  {
    sub_B170D4();
  }
  v11 = *(_QWORD *)&AllEntity->max_length;
  v12 = AllEntity;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
      {
        sub_B17100(AllEntity, v9, v10);
        sub_B170A0();
      }
      AllEntity = (ClassBoardSquareEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardSquareEntity_o *, void *))this->klass->vtable._5_AddSquare.method)(
                                                    this,
                                                    v12->m_Items[v13],
                                                    this->klass[1]._1.image);
      LODWORD(v11) = v12->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v11 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardModelBuilder__UnionSquareLine(
        ClassBoardModelBuilder_o *this,
        IClassBoardLineModel_o *line,
        int32_t squareId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x21
  WarBoardData_SquareRangeSearch_o *v21; // x0
  IClassBoardLineModel_c *klass; // x8
  WarBoardData_SquareRangeSearch_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  WarBoardData_SquareRangeSearch_c *v27; // x8
  unsigned __int64 v28; // x10
  IClassBoardSquareModel_c **v29; // x11
  __int64 v30; // x0

  if ( (byte_40FB992 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, line);
    sub_B16FFC(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B16FFC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v9);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v10);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B16FFC(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v12);
    sub_B16FFC(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v13);
    byte_40FB992 = 1;
  }
  v14 = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B170CC(
                                                            ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo,
                                                            line,
                                                            *(_QWORD *)&squareId,
                                                            method,
                                                            v4);
  ClassBoardModelBuilder___c__DisplayClass10_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  v14->fields.squareId = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v23 = v21;
  if ( *(_WORD *)&line->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&line->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(line, IClassBoardLineModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(IClassBoardLineModel_o *, WarBoardData_SquareRangeSearch_o *, _QWORD))p_method)(
    line,
    v23,
    *(_QWORD *)(p_method + 8));
  if ( !v23 )
LABEL_21:
    sub_B170D4();
  v27 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = (IClassBoardSquareModel_c **)&v27->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v30 = (__int64)(&v27[1]._1.implementedInterfaces + 2 * *(_DWORD *)v29);
  }
  else
  {
LABEL_18:
    v30 = sub_AAFEF8(v23, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(WarBoardData_SquareRangeSearch_o *, IClassBoardLineModel_o *, _QWORD))v30)(
    v23,
    line,
    *(_QWORD *)(v30 + 8));
}


System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *__fastcall ClassBoardModelBuilder__get_LineList(
        ClassBoardModelBuilder_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)this->fields.lineList;
}


System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *__fastcall ClassBoardModelBuilder__get_SquareList(
        ClassBoardModelBuilder_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)this->fields.squareList;
}


void __fastcall ClassBoardModelBuilder___c__DisplayClass10_0___ctor(
        ClassBoardModelBuilder___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardModelBuilder___c__DisplayClass10_0___UnionSquareLine_b__0(
        ClassBoardModelBuilder___c__DisplayClass10_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F70E4 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40F70E4 = 1;
  }
  if ( !x )
    sub_B170D4();
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == this->fields.squareId;
}
void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418951B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v5);
    byte_418951B = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v6;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardLineModel_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_4189519 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardLineModel_TypeInfo, line);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v5);
    byte_4189519 = 1;
  }
  v6 = (ClassBoardLineModel_o *)sub_B2C42C(ClassBoardLineModel_TypeInfo);
  ClassBoardLineModel___ctor(v6, line, v7);
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B2C434(0LL, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
  return v6;
}


ClassBoardSquareModel_o *__fastcall ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardLockModel_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_418951A & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardLockModel_TypeInfo, squareEntity);
    sub_B2C35C(&ClassBoardSquareModel_TypeInfo, v5);
    this = (ClassBoardModelBuilder_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                                         v6);
    byte_418951A = 1;
  }
  if ( !squareEntity )
    goto LABEL_9;
  if ( squareEntity->fields.lockId )
  {
    v7 = (ClassBoardLockModel_o *)sub_B2C42C(ClassBoardLockModel_TypeInfo);
    ClassBoardLockModel___ctor(v7, squareEntity, v8);
  }
  else
  {
    v7 = (ClassBoardLockModel_o *)sub_B2C42C(ClassBoardSquareModel_TypeInfo);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v7, squareEntity, v9);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this )
LABEL_9:
    sub_B2C434(this, squareEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
  return (ClassBoardSquareModel_o *)v7;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *lineList; // x0

  if ( (byte_4189515 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, v3);
    byte_4189515 = 1;
  }
  lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.lineList;
  if ( !lineList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          lineList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__),
        (lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.squareList) == 0LL) )
  {
    sub_B2C434(lineList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    lineList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
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
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w23
  __int64 v12; // x21
  const MethodInfo *v13; // x3
  IClassBoardLineModel_o *v14; // x22
  const MethodInfo *v15; // x3
  __int64 v16; // x0

  if ( (byte_4189517 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardLineMaster___, *(_QWORD *)&baseId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4189517 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = ClassBoardLineMaster__GetAllEntity(
                                     (ClassBoardLineMaster_o *)Master_WarQuestSelectionMaster,
                                     baseId,
                                     v8);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  v9 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v10 = Master_WarQuestSelectionMaster;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v16 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v16, 0LL);
      }
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      Master_WarQuestSelectionMaster = (void *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                                 this,
                                                 v12,
                                                 this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v12 )
        break;
      v14 = (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster,
        *(_DWORD *)(v12 + 24),
        v13);
      ClassBoardModelBuilder__UnionSquareLine(this, v14, *(_DWORD *)(v12 + 28), v15);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_15:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  ClassBoardSquareMaster_o *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v12; // x0

  if ( (byte_4189516 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, *(_QWORD *)&baseId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4189516 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)ClassBoardSquareMaster__GetAllEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       baseId,
                                                                       v8)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v10 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)MasterName_k__BackingField )
      {
        v12 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v12, 0LL);
      }
      Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, _QWORD, void *))this->klass->vtable._5_AddSquare.method)(
                                                                     this,
                                                                     *((_QWORD *)&v10->fields.list + v11),
                                                                     this->klass[1]._1.image);
      LODWORD(MasterName_k__BackingField) = v10->fields._MasterName_k__BackingField;
      ++v11;
    }
    while ( (__int64)v11 < (int)MasterName_k__BackingField );
  }
}


void __fastcall ClassBoardModelBuilder__UnionSquareLine(
        ClassBoardModelBuilder_o *this,
        IClassBoardLineModel_o *line,
        int32_t squareId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v13; // x22
  WarBoardData_SquareRangeSearch_o *v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  __int64 v18; // x3
  IClassBoardLineModel_c *klass; // x8
  WarBoardData_SquareRangeSearch_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  WarBoardData_SquareRangeSearch_c *v25; // x8
  unsigned __int64 v26; // x10
  IClassBoardSquareModel_c **v27; // x11
  __int64 v28; // x0

  if ( (byte_4189518 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, line);
    sub_B2C35C(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v7);
    sub_B2C35C(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v9);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v11);
    sub_B2C35C(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v12);
    byte_4189518 = 1;
  }
  v13 = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B2C42C(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
  ClassBoardModelBuilder___c__DisplayClass10_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.squareId = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  v14 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v20 = v14;
  if ( *(_WORD *)&line->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&line->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(line, IClassBoardLineModel_TypeInfo, 3LL, v18);
  }
  v14 = (WarBoardData_SquareRangeSearch_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, WarBoardData_SquareRangeSearch_o *, _QWORD))p_method)(
                                              line,
                                              v20,
                                              *(_QWORD *)(p_method + 8));
  if ( !v20 )
LABEL_21:
    sub_B2C434(v14, v15);
  v25 = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = (IClassBoardSquareModel_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v28 = (__int64)(&v25[1]._1.implementedInterfaces + 2 * *(_DWORD *)v27);
  }
  else
  {
LABEL_18:
    v28 = sub_AC5258(v20, IClassBoardSquareModel_TypeInfo, 14LL, v24);
  }
  (*(void (__fastcall **)(WarBoardData_SquareRangeSearch_o *, IClassBoardLineModel_o *, _QWORD))v28)(
    v20,
    line,
    *(_QWORD *)(v28 + 8));
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
  __int64 v3; // x3
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_4184EEC & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4184EEC = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v5->fields.squareId;
}
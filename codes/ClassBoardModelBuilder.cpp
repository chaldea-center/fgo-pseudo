void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4217B4A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v6);
    byte_4217B4A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_4217B48 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardLineModel_TypeInfo, line);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v5);
    byte_4217B48 = 1;
  }
  v6 = (ClassBoardLineModel_o *)sub_B0D974(ClassBoardLineModel_TypeInfo, line, method);
  ClassBoardLineModel___ctor(v6, line, v7);
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
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
  __int64 v7; // x1
  __int64 v8; // x2
  ClassBoardLockModel_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4217B49 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardLockModel_TypeInfo, squareEntity);
    sub_B0D8A4(&ClassBoardSquareModel_TypeInfo, v5);
    this = (ClassBoardModelBuilder_o *)sub_B0D8A4(
                                         &Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                                         v6);
    byte_4217B49 = 1;
  }
  if ( !squareEntity )
    goto LABEL_9;
  if ( ClassBoardSquareEntity__get_HasLockId(squareEntity, 0LL) )
  {
    v9 = (ClassBoardLockModel_o *)sub_B0D974(ClassBoardLockModel_TypeInfo, v7, v8);
    ClassBoardLockModel___ctor(v9, squareEntity, v10);
  }
  else
  {
    v9 = (ClassBoardLockModel_o *)sub_B0D974(ClassBoardSquareModel_TypeInfo, v7, v8);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v9, squareEntity, 0LL);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this )
LABEL_9:
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
  return (ClassBoardSquareModel_o *)v9;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *lineList; // x0

  if ( (byte_4217B44 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, v3);
    byte_4217B44 = 1;
  }
  lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.lineList;
  if ( !lineList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          lineList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__),
        (lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.squareList) == 0LL) )
  {
    sub_B0D97C(lineList);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    lineList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
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
  const MethodInfo *v7; // x2
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w23
  __int64 v11; // x21
  const MethodInfo *v12; // x3
  IClassBoardLineModel_o *v13; // x22
  const MethodInfo *v14; // x3
  __int64 v15; // x0

  if ( (byte_4217B46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardLineMaster___, *(_QWORD *)&baseId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_4217B46 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = ClassBoardLineMaster__GetAllEntity(
                                     (ClassBoardLineMaster_o *)Master_WarQuestSelectionMaster,
                                     baseId,
                                     v7);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  v8 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v9 = Master_WarQuestSelectionMaster;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v15 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v15, 0LL);
      }
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      Master_WarQuestSelectionMaster = (void *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                                 this,
                                                 v11,
                                                 this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v11 )
        break;
      v13 = (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster,
        *(_DWORD *)(v11 + 24),
        v12);
      ClassBoardModelBuilder__UnionSquareLine(this, v13, *(_DWORD *)(v11 + 28), v14);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_15:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  struct System_String_o *MasterName_k__BackingField; // x8
  ClassBoardSquareMaster_o *v8; // x20
  unsigned __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_4217B45 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, *(_QWORD *)&baseId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_4217B45 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)ClassBoardSquareMaster__GetAllEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       baseId,
                                                                       0LL)) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v8 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)MasterName_k__BackingField )
      {
        v10 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v10, 0LL);
      }
      Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, _QWORD, void *))this->klass->vtable._5_AddSquare.method)(
                                                                     this,
                                                                     *((_QWORD *)&v8->fields.list + v9),
                                                                     this->klass[1]._1.image);
      LODWORD(MasterName_k__BackingField) = v8->fields._MasterName_k__BackingField;
      ++v9;
    }
    while ( (__int64)v9 < (int)MasterName_k__BackingField );
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x2
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x21
  IClassBoardLineModel_c *klass; // x8
  WarBoardData_SquareRangeSearch_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  WarBoardData_SquareRangeSearch_c *v24; // x8
  unsigned __int64 v25; // x10
  IClassBoardSquareModel_c **v26; // x11
  __int64 v27; // x0

  if ( (byte_4217B47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, line);
    sub_B0D8A4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v9);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v11);
    sub_B0D8A4(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v12);
    byte_4217B47 = 1;
  }
  v13 = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B0D974(
                                                            ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo,
                                                            line,
                                                            *(_QWORD *)&squareId);
  ClassBoardModelBuilder___c__DisplayClass10_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.squareId = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  v14 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
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
    p_method = sub_AA67A0(line, IClassBoardLineModel_TypeInfo, 3LL);
  }
  v14 = (WarBoardData_SquareRangeSearch_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, WarBoardData_SquareRangeSearch_o *, _QWORD))p_method)(
                                              line,
                                              v20,
                                              *(_QWORD *)(p_method + 8));
  if ( !v20 )
LABEL_21:
    sub_B0D97C(v14);
  v24 = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (IClassBoardSquareModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v27 = (__int64)(&v24[1]._1.implementedInterfaces + 2 * *(_DWORD *)v26);
  }
  else
  {
LABEL_18:
    v27 = sub_AA67A0(v20, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(WarBoardData_SquareRangeSearch_o *, IClassBoardLineModel_o *, _QWORD))v27)(
    v20,
    line,
    *(_QWORD *)(v27 + 8));
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
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_4211E29 & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, x);
    byte_4211E29 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
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
    p_method = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v4->fields.squareId;
}
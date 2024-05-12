void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438D3E2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B775C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_438D3E2 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_438D3E0 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardLineModel_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_438D3E0 = 1;
  }
  v5 = (ClassBoardLineModel_o *)sub_B77694(ClassBoardLineModel_TypeInfo);
  ClassBoardLineModel___ctor(v5, line, v6);
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B7769C(0LL, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
  return v5;
}


ClassBoardSquareModel_o *__fastcall ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v4; // x19
  ClassBoardLockModel_o *v5; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_438D3E1 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardLockModel_TypeInfo);
    sub_B775C4(&ClassBoardSquareModel_TypeInfo);
    this = (ClassBoardModelBuilder_o *)sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    byte_438D3E1 = 1;
  }
  if ( !squareEntity )
    goto LABEL_9;
  if ( squareEntity->fields.lockId )
  {
    v5 = (ClassBoardLockModel_o *)sub_B77694(ClassBoardLockModel_TypeInfo);
    ClassBoardLockModel___ctor(v5, squareEntity, v6);
  }
  else
  {
    v5 = (ClassBoardLockModel_o *)sub_B77694(ClassBoardSquareModel_TypeInfo);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v5, squareEntity, v7);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this )
LABEL_9:
    sub_B7769C(this, squareEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
  return (ClassBoardSquareModel_o *)v5;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *lineList; // x0

  if ( (byte_438D3DC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
    byte_438D3DC = 1;
  }
  lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.lineList;
  if ( !lineList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          lineList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__),
        (lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.squareList) == 0LL) )
  {
    sub_B7769C(lineList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    lineList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
}


void __fastcall ClassBoardModelBuilder__Make(ClassBoardModelBuilder_o *this, int32_t baseId, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ClassBoardModelBuilder__MakeSquare(this, baseId, method);
  ClassBoardModelBuilder__MakeLine(this, baseId, v5);
}


void __fastcall ClassBoardModelBuilder__MakeLine(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w23
  __int64 v11; // x21
  const MethodInfo *v12; // x3
  IClassBoardLineModel_o *v13; // x22
  const MethodInfo *v14; // x3
  __int64 v15; // x0

  if ( (byte_438D3DE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardLineMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438D3DE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
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
        v15 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v15, 0LL);
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
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
}


void __fastcall ClassBoardModelBuilder__MakeSquare(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  ClassBoardSquareMaster_o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v11; // x0

  if ( (byte_438D3DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438D3DD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)ClassBoardSquareMaster__GetAllEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       baseId,
                                                                       v7)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v9 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)MasterName_k__BackingField )
      {
        v11 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v11, 0LL);
      }
      Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, _QWORD, void *))this->klass->vtable._5_AddSquare.method)(
                                                                     this,
                                                                     *((_QWORD *)&v9->fields.list + v10),
                                                                     this->klass[1]._1.image);
      LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
      ++v10;
    }
    while ( (__int64)v10 < (int)MasterName_k__BackingField );
  }
}


void __fastcall ClassBoardModelBuilder__UnionSquareLine(
        ClassBoardModelBuilder_o *this,
        IClassBoardLineModel_o *line,
        int32_t squareId,
        const MethodInfo *method)
{
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v7; // x22
  WarBoardData_SquareRangeSearch_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x21
  IClassBoardLineModel_c *klass; // x8
  WarBoardData_SquareRangeSearch_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  WarBoardData_SquareRangeSearch_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareModel_c **v19; // x11
  __int64 v20; // x0

  if ( (byte_438D3DF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_B775C4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B775C4(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_B775C4(&IClassBoardLineModel_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__);
    sub_B775C4(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
    byte_438D3DF = 1;
  }
  v7 = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B77694(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
  ClassBoardModelBuilder___c__DisplayClass10_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_21;
  v7->fields.squareId = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  v8 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
         (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v13 = v8;
  if ( *(_WORD *)&line->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&line->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(line, IClassBoardLineModel_TypeInfo, 3LL);
  }
  v8 = (WarBoardData_SquareRangeSearch_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, WarBoardData_SquareRangeSearch_o *, _QWORD))p_method)(
                                             line,
                                             v13,
                                             *(_QWORD *)(p_method + 8));
  if ( !v13 )
LABEL_21:
    sub_B7769C(v8, v9);
  v17 = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17[1]._1.implementedInterfaces + 2 * *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_B0F4C0(v13, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(WarBoardData_SquareRangeSearch_o *, IClassBoardLineModel_o *, _QWORD))v20)(
    v13,
    line,
    *(_QWORD *)(v20 + 8));
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
  if ( (byte_438858C & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438858C = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
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
    p_method = sub_B0F4C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v4->fields.squareId;
}
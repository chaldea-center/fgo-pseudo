void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EA830 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v11, v12, v13);
    byte_42EA830 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v14;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ClassBoardLineModel_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_42EA82E & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardLineModel_TypeInfo, (_DWORD)line, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v6, v7, v8);
    byte_42EA82E = 1;
  }
  v9 = (ClassBoardLineModel_o *)sub_B5D694(ClassBoardLineModel_TypeInfo);
  ClassBoardLineModel___ctor(v9, line, v10);
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B5D69C(0LL, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
  return v9;
}


ClassBoardSquareModel_o *__fastcall ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardModelBuilder_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ClassBoardLockModel_o *v12; // x21
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  v5 = this;
  if ( (byte_42EA82F & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardLockModel_TypeInfo, (_DWORD)squareEntity, (_DWORD)method, v3);
    sub_B5D5C4(&ClassBoardSquareModel_TypeInfo, v6, v7, v8);
    this = (ClassBoardModelBuilder_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                                         v9,
                                         v10,
                                         v11);
    byte_42EA82F = 1;
  }
  if ( !squareEntity )
    goto LABEL_9;
  if ( squareEntity->fields.lockId )
  {
    v12 = (ClassBoardLockModel_o *)sub_B5D694(ClassBoardLockModel_TypeInfo);
    ClassBoardLockModel___ctor(v12, squareEntity, v13);
  }
  else
  {
    v12 = (ClassBoardLockModel_o *)sub_B5D694(ClassBoardSquareModel_TypeInfo);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v12, squareEntity, v14);
  }
  this = (ClassBoardModelBuilder_o *)v5->fields.squareList;
  if ( !this )
LABEL_9:
    sub_B5D69C(this, squareEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
  return (ClassBoardSquareModel_o *)v12;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *lineList; // x0

  if ( (byte_42EA82A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, v5, v6, v7);
    byte_42EA82A = 1;
  }
  lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.lineList;
  if ( !lineList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          lineList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__),
        (lineList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.squareList) == 0LL) )
  {
    sub_B5D69C(lineList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    lineList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w23
  __int64 v15; // x21
  const MethodInfo *v16; // x3
  IClassBoardLineModel_o *v17; // x22
  const MethodInfo *v18; // x3
  __int64 v19; // x0

  if ( (byte_42EA82C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardLineMaster___, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42EA82C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = ClassBoardLineMaster__GetAllEntity(
                                     (ClassBoardLineMaster_o *)Master_WarQuestSelectionMaster,
                                     baseId,
                                     v11);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  v12 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v13 = Master_WarQuestSelectionMaster;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v19 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v19, 0LL);
      }
      v15 = *((_QWORD *)v13 + (int)v14 + 4);
      Master_WarQuestSelectionMaster = (void *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                                 this,
                                                 v15,
                                                 this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v15 )
        break;
      v17 = (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_WarQuestSelectionMaster,
        *(_DWORD *)(v15 + 24),
        v16);
      ClassBoardModelBuilder__UnionSquareLine(this, v17, *(_DWORD *)(v15 + 28), v18);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_15:
    sub_B5D69C(Master_WarQuestSelectionMaster, v10);
  }
}


void __fastcall ClassBoardModelBuilder__MakeSquare(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  ClassBoardSquareMaster_o *v13; // x20
  unsigned __int64 v14; // x21
  __int64 v15; // x0

  if ( (byte_42EA82B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42EA82B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)ClassBoardSquareMaster__GetAllEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       baseId,
                                                                       v11)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v10);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v13 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)MasterName_k__BackingField )
      {
        v15 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v15, 0LL);
      }
      Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, _QWORD, void *))this->klass->vtable._5_AddSquare.method)(
                                                                     this,
                                                                     *((_QWORD *)&v13->fields.list + v14),
                                                                     this->klass[1]._1.image);
      LODWORD(MasterName_k__BackingField) = v13->fields._MasterName_k__BackingField;
      ++v14;
    }
    while ( (__int64)v14 < (int)MasterName_k__BackingField );
  }
}


void __fastcall ClassBoardModelBuilder__UnionSquareLine(
        ClassBoardModelBuilder_o *this,
        IClassBoardLineModel_o *line,
        int32_t squareId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v25; // x22
  WarBoardData_SquareRangeSearch_o *v26; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x21
  __int64 v30; // x3
  IClassBoardLineModel_c *klass; // x8
  WarBoardData_SquareRangeSearch_o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  WarBoardData_SquareRangeSearch_c *v37; // x8
  unsigned __int64 v38; // x10
  IClassBoardSquareModel_c **v39; // x11
  __int64 v40; // x0

  if ( (byte_42EA82D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, (_DWORD)line, squareId, method);
    sub_B5D5C4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v19, v20, v21);
    sub_B5D5C4(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v22, v23, v24);
    byte_42EA82D = 1;
  }
  v25 = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B5D694(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
  ClassBoardModelBuilder___c__DisplayClass10_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_21;
  v25->fields.squareId = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v25,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  v26 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v32 = v26;
  if ( *(_WORD *)&line->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&line->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(line, IClassBoardLineModel_TypeInfo, 3LL, v30);
  }
  v26 = (WarBoardData_SquareRangeSearch_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, WarBoardData_SquareRangeSearch_o *, _QWORD))p_method)(
                                              line,
                                              v32,
                                              *(_QWORD *)(p_method + 8));
  if ( !v32 )
LABEL_21:
    sub_B5D69C(v26, v27);
  v37 = v32->klass;
  if ( *(_WORD *)&v32->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = (IClassBoardSquareModel_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v39 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v38;
      v39 += 2;
      if ( v38 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v40 = (__int64)(&v37[1]._1.implementedInterfaces + 2 * *(_DWORD *)v39);
  }
  else
  {
LABEL_18:
    v40 = sub_AF54C0(v32, IClassBoardSquareModel_TypeInfo, 14LL, v36);
  }
  (*(void (__fastcall **)(WarBoardData_SquareRangeSearch_o *, IClassBoardLineModel_o *, _QWORD))v40)(
    v32,
    line,
    *(_QWORD *)(v40 + 8));
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
  if ( (byte_42E5E82 & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_B5D5C4(
                                                               &IClassBoardSquareModel_TypeInfo,
                                                               (_DWORD)x,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E5E82 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
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
    p_method = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v5->fields.squareId;
}
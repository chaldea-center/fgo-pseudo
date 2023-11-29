void __fastcall ClassBoardLineModel___ctor(
        ClassBoardLineModel_o *this,
        ClassBoardLineEntity_o *lineEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FB974 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, lineEntity);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7);
    byte_40FB974 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                 lineEntity,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = lineEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)lineEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall ClassBoardLineModel__AddSquare(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *square,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x0

  if ( (byte_40FB975 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, square);
    byte_40FB975 = 1;
  }
  squareList = this->fields.squareList;
  if ( !squareList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
}


bool __fastcall ClassBoardLineModel___get_Next_b__6_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  struct ClassBoardLineEntity_o *entity; // x8

  if ( (byte_40FB977 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40FB977 = 1;
  }
  if ( !x )
    goto LABEL_12;
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
  v9 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  entity = this->fields.entity;
  if ( !entity )
LABEL_12:
    sub_B170D4();
  return v9 == entity->fields.nextSquareId;
}


bool __fastcall ClassBoardLineModel___get_Prev_b__4_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  struct ClassBoardLineEntity_o *entity; // x8

  if ( (byte_40FB976 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40FB976 = 1;
  }
  if ( !x )
    goto LABEL_12;
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
  v9 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  entity = this->fields.entity;
  if ( !entity )
LABEL_12:
    sub_B170D4();
  return v9 == entity->fields.prevSquareId;
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Next(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21

  if ( (byte_40FB973 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardLineModel__get_Next_b__6_0__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v6);
    sub_B16FFC(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v7);
    sub_B16FFC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    byte_40FB973 = 1;
  }
  squareList = this->fields.squareList;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_ClassBoardLineModel__get_Next_b__6_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v10,
                                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Prev(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21

  if ( (byte_40FB972 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardLineModel__get_Prev_b__4_0__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v6);
    sub_B16FFC(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v7);
    sub_B16FFC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v8);
    byte_40FB972 = 1;
  }
  squareList = this->fields.squareList;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_ClassBoardLineModel__get_Prev_b__4_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v10,
                                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


System_String_o *__fastcall ClassBoardLineModel__get_PrimaryKey(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct ClassBoardLineEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(struct ClassBoardLineEntity_o *, Il2CppMethodPointer))entity->klass->vtable._4_get_PrimaryKey.method)(
                              entity,
                              entity->klass->vtable._5_CreatePrimaryKey.methodPtr);
}
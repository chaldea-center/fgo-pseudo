void __fastcall ClassBoardLineModel___ctor(
        ClassBoardLineModel_o *this,
        ClassBoardLineEntity_o *lineEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B3875 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_42B3875 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.squareList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = lineEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)lineEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall ClassBoardLineModel__AddSquare(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *square,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x0

  if ( (byte_42B3876 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    byte_42B3876 = 1;
  }
  squareList = this->fields.squareList;
  if ( !squareList )
    sub_B52A5C(0LL, square);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
}


bool __fastcall ClassBoardLineModel___get_Next_b__6_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardLineModel_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v5 = this;
  if ( (byte_42B3878 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42B3878 = 1;
  }
  if ( !x )
    goto LABEL_12;
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
    p_method = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v5->fields.entity;
  if ( !entity )
LABEL_12:
    sub_B52A5C(this, x);
  return (_DWORD)this == entity->fields.nextSquareId;
}


bool __fastcall ClassBoardLineModel___get_Prev_b__4_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardLineModel_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v5 = this;
  if ( (byte_42B3877 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42B3877 = 1;
  }
  if ( !x )
    goto LABEL_12;
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
    p_method = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v5->fields.entity;
  if ( !entity )
LABEL_12:
    sub_B52A5C(this, x);
  return (_DWORD)this == entity->fields.prevSquareId;
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Next(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v4; // x21

  if ( (byte_42B3874 & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardLineModel__get_Next_b__6_0__);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_B52984(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B52984(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_42B3874 = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ClassBoardLineModel__get_Next_b__6_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Prev(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v4; // x21

  if ( (byte_42B3873 & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardLineModel__get_Prev_b__4_0__);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_B52984(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B52984(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_42B3873 = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ClassBoardLineModel__get_Prev_b__4_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


System_String_o *__fastcall ClassBoardLineModel__get_PrimaryKey(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct ClassBoardLineEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct ClassBoardLineEntity_o *, Il2CppMethodPointer))entity->klass->vtable._4_get_PrimaryKey.method)(
                              entity,
                              entity->klass->vtable._5_CreatePrimaryKey.methodPtr);
}
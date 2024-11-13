void __fastcall ClassBoardLineModel___ctor(
        ClassBoardLineModel_o *this,
        ClassBoardLineEntity_o *lineEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1975D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, lineEntity, method);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v6, v7);
    byte_4B1975D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                      lineEntity,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = lineEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)lineEntity, v15, v16, v17, v18, v19, v20);
}


void __fastcall ClassBoardLineModel__AddSquare(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *square,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *squareList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B1975E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, square, method);
    byte_4B1975E = 1;
  }
  squareList = (System_Collections_Generic_List_object__o *)this->fields.squareList;
  if ( !squareList
    || (items = squareList->fields._items,
        v12 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++squareList->fields._version,
        !items) )
  {
    sub_1BCAA3C(squareList, square);
  }
  size = squareList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      squareList,
      (Il2CppObject *)square,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    squareList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)square;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)square, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


bool __fastcall ClassBoardLineModel___get_Next_b__6_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v4 = this;
  if ( (byte_4B19760 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, x, method);
    byte_4B19760 = 1;
  }
  if ( !x )
    goto LABEL_12;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(this, x);
  return (_DWORD)this == entity->fields.nextSquareId;
}


bool __fastcall ClassBoardLineModel___get_Prev_b__4_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v4 = this;
  if ( (byte_4B1975F & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, x, method);
    byte_4B1975F = 1;
  }
  if ( !x )
    goto LABEL_12;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(this, x);
  return (_DWORD)this == entity->fields.prevSquareId;
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Next(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4B1975C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardLineModel__get_Next_b__6_0__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v5, v6);
    sub_1BCA7E0(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7, v8);
    byte_4B1975C = 1;
  }
  squareList = this->fields.squareList;
  v10 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IClassBoardSquareModel__bool__TypeInfo, method, v2, v3);
  System_Func_object__bool____ctor(v10, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Next_b__6_0__, 0LL);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v10,
                                       (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Prev(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4B1975B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardLineModel__get_Prev_b__4_0__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v5, v6);
    sub_1BCA7E0(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7, v8);
    byte_4B1975B = 1;
  }
  squareList = this->fields.squareList;
  v10 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IClassBoardSquareModel__bool__TypeInfo, method, v2, v3);
  System_Func_object__bool____ctor(v10, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Prev_b__4_0__, 0LL);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v10,
                                       (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


System_String_o *__fastcall ClassBoardLineModel__get_PrimaryKey(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct ClassBoardLineEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct ClassBoardLineEntity_o *, Il2CppMethodPointer))entity->klass->vtable._4_get_PrimaryKey.method)(
                              entity,
                              entity->klass->vtable._5_CreatePrimaryKey.methodPtr);
}
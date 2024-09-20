void __fastcall ClassBoardLineModel___ctor(
        ClassBoardLineModel_o *this,
        ClassBoardLineEntity_o *lineEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E62F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4A5E62F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.squareList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = lineEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)lineEntity, v8, v9);
}


void __fastcall ClassBoardLineModel__AddSquare(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *square,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *squareList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A5E630 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    byte_4A5E630 = 1;
  }
  squareList = (System_Collections_Generic_List_object__o *)this->fields.squareList;
  if ( !squareList
    || (items = squareList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++squareList->fields._version,
        !items) )
  {
    sub_1B8880C(squareList, square);
  }
  size = squareList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      squareList,
      (Il2CppObject *)square,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    squareList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)square;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)square, (int32_t)method, v3);
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
  if ( (byte_4A5E632 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E632 = 1;
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
    p_method = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(this, x);
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
  if ( (byte_4A5E631 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E631 = 1;
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
    p_method = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                    x,
                                    *(_QWORD *)(p_method + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(this, x);
  return (_DWORD)this == entity->fields.prevSquareId;
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Next(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v4; // x21

  if ( (byte_4A5E62E & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardLineModel__get_Next_b__6_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1B885B0(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_4A5E62E = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Next_b__6_0__, 0LL);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


IClassBoardSquareModel_o *__fastcall ClassBoardLineModel__get_Prev(
        ClassBoardLineModel_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v4; // x21

  if ( (byte_4A5E62D & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardLineModel__get_Prev_b__4_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1B885B0(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_4A5E62D = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Prev_b__4_0__, 0LL);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


System_String_o *__fastcall ClassBoardLineModel__get_PrimaryKey(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct ClassBoardLineEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct ClassBoardLineEntity_o *, Il2CppMethodPointer))entity->klass->vtable._4_get_PrimaryKey.method)(
                              entity,
                              entity->klass->vtable._5_CreatePrimaryKey.methodPtr);
}
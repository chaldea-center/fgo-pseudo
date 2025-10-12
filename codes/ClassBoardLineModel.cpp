void ClassBoardLineModel___ctor(
        ClassBoardLineModel_o *this,
        ClassBoardLineEntity_o *lineEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B597 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C3B597 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.entity = lineEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)lineEntity, v8, v9);
}


void ClassBoardLineModel__AddSquare(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *square,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *squareList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C3B598 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    byte_4C3B598 = 1;
  }
  squareList = (System_Collections_Generic_List_object__o *)this->fields.squareList;
  if ( !squareList
    || (items = squareList->fields._items,
        v8 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++squareList->fields._version,
        !items) )
  {
    sub_1C32E7C(squareList);
  }
  size = squareList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      squareList,
      (Il2CppObject *)square,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    squareList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)square;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 4), (int32_t)square, (int32_t)method, v3);
  }
}


bool ClassBoardLineModel___get_Next_b__6_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v4 = this;
  if ( (byte_4C3B59A & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B59A = 1;
  }
  if ( !x )
    goto LABEL_12;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                    x,
                                    *(_QWORD *)(v8 + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1C32E7C(this);
  return (_DWORD)this == entity->fields.nextSquareId;
}


bool ClassBoardLineModel___get_Prev_b__4_0(
        ClassBoardLineModel_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  struct ClassBoardLineEntity_o *entity; // x8

  v4 = this;
  if ( (byte_4C3B599 & 1) == 0 )
  {
    this = (ClassBoardLineModel_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B599 = 1;
  }
  if ( !x )
    goto LABEL_12;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardLineModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                    x,
                                    *(_QWORD *)(v8 + 8));
  entity = v4->fields.entity;
  if ( !entity )
LABEL_12:
    sub_1C32E7C(this);
  return (_DWORD)this == entity->fields.prevSquareId;
}


IClassBoardSquareModel_o *ClassBoardLineModel__get_Next(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v4; // x21

  if ( (byte_4C3B596 & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardLineModel__get_Next_b__6_0__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C32C20(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_4C3B596 = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Next_b__6_0__, 0);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


IClassBoardSquareModel_o *ClassBoardLineModel__get_Prev(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v4; // x21

  if ( (byte_4C3B595 & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardLineModel__get_Prev_b__4_0__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C32C20(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    byte_4C3B595 = 1;
  }
  squareList = this->fields.squareList;
  v4 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_ClassBoardLineModel__get_Prev_b__4_0__, 0);
  return (IClassBoardSquareModel_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
                                       (System_Func_TSource__bool__o *)v4,
                                       (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
}


System_String_o *ClassBoardLineModel__get_PrimaryKey(ClassBoardLineModel_o *this, const MethodInfo *method)
{
  struct ClassBoardLineEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(0);
  return (System_String_o *)((__int64 (__fastcall *)(struct ClassBoardLineEntity_o *, const MethodInfo *))entity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                              entity,
                              entity->klass->vtable._4_get_PrimaryKey.method);
}
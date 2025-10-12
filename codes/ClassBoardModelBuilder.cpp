void ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3B437 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    byte_4C3B437 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


ClassBoardLineModel_o *ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  ClassBoardLineModel_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8

  if ( (byte_4C3B435 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardLineModel_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4C3B435 = 1;
  }
  v5 = (ClassBoardLineModel_o *)sub_1C32E6C(ClassBoardLineModel_TypeInfo);
  ClassBoardLineModel___ctor(v5, line, 0);
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v10 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1C32E7C(lineList);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)v5,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v12[4] = (Il2CppClass *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v5, v6, v7);
  }
  return v5;
}


ClassBoardSquareModel_o *ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v4; // x19
  ClassBoardLockModel_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  _QWORD *v9; // x9
  __int64 squareList_low; // x10
  System_Collections_Generic_List_IClassBoardLineModel__c **v11; // x8

  v4 = this;
  if ( (byte_4C3B436 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardLockModel_TypeInfo);
    sub_1C32C20(&ClassBoardSquareModel_TypeInfo);
    this = (ClassBoardModelBuilder_o *)sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    byte_4C3B436 = 1;
  }
  if ( !squareEntity )
    goto LABEL_13;
  if ( ClassBoardSquareEntity__get_HasLockId(squareEntity, 0) )
  {
    v5 = (ClassBoardLockModel_o *)sub_1C32E6C(ClassBoardLockModel_TypeInfo);
    ClassBoardLockModel___ctor(v5, squareEntity, 0);
  }
  else
  {
    v5 = (ClassBoardLockModel_o *)sub_1C32E6C(ClassBoardSquareModel_TypeInfo);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v5, squareEntity, 0);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this
    || (lineList = this->fields.lineList,
        v9 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++HIDWORD(this->fields.squareList),
        !lineList) )
  {
LABEL_13:
    sub_1C32E7C(this);
  }
  squareList_low = SLODWORD(this->fields.squareList);
  if ( (unsigned int)squareList_low >= lineList->fields._size )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v5,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &lineList->klass + squareList_low;
    LODWORD(this->fields.squareList) = squareList_low + 1;
    v11[4] = (System_Collections_Generic_List_IClassBoardLineModel__c *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 4), (int32_t)v5, v6, v7);
  }
  return (ClassBoardSquareModel_o *)v5;
}


void ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v2; // x19
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x8
  int32_t v7; // w2
  int v8; // w9

  v2 = this;
  if ( (byte_4C3B431 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__);
    this = (ClassBoardModelBuilder_o *)sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__);
    byte_4C3B431 = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    goto LABEL_10;
  size = lineList->fields._size;
  v5 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0);
  squareList = v2->fields.squareList;
  if ( !squareList )
LABEL_10:
    sub_1C32E7C(this);
  v7 = squareList->fields._size;
  v8 = squareList->fields._version + 1;
  squareList->fields._size = 0;
  squareList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)squareList->fields._items, 0, v7, 0);
}


void ClassBoardModelBuilder__Make(ClassBoardModelBuilder_o *this, int32_t baseId, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ClassBoardModelBuilder__MakeSquare(this, baseId, method);
  ClassBoardModelBuilder__MakeLine(this, baseId, v5);
}


void ClassBoardModelBuilder__MakeLine(ClassBoardModelBuilder_o *this, int32_t baseId, const MethodInfo *method)
{
  ClassBoardLineEntity_array *Master_object; // x0
  int max_length; // w8
  ClassBoardLineEntity_array *v7; // x20
  unsigned int v8; // w23
  ClassBoardLineEntity_o *v9; // x21
  const MethodInfo *v10; // x3
  IClassBoardLineModel_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4C3B433 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardLineMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3B433 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardLineEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Master_object = ClassBoardLineMaster__GetAllEntity((ClassBoardLineMaster_o *)Master_object, baseId, 0);
  if ( !Master_object )
    goto LABEL_14;
  max_length = Master_object->max_length;
  v7 = Master_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(Master_object);
      v9 = v7->m_Items[v8];
      Master_object = (ClassBoardLineEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardLineEntity_o *, const MethodInfo *))this->klass->vtable._4_AddLine.methodPtr)(
                                                      this,
                                                      v9,
                                                      this->klass->vtable._4_AddLine.method);
      if ( !v9 )
        break;
      v11 = (IClassBoardLineModel_o *)Master_object;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_object,
        v9->fields.prevSquareId,
        v10);
      ClassBoardModelBuilder__UnionSquareLine(this, v11, v9->fields.nextSquareId, v12);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_1C32E7C(Master_object);
  }
}


void ClassBoardModelBuilder__MakeSquare(ClassBoardModelBuilder_o *this, int32_t baseId, const MethodInfo *method)
{
  ClassBoardSquareEntity_array *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  ClassBoardSquareEntity_array *v7; // x20
  unsigned __int64 v8; // x21

  if ( (byte_4C3B432 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3B432 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardSquareEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (Master_object = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, baseId, 0)) == 0 )
  {
    sub_1C32E7C(Master_object);
  }
  max_length = Master_object->max_length;
  v7 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      Master_object = (ClassBoardSquareEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardSquareEntity_o *, const MethodInfo *))this->klass->vtable._5_AddSquare.methodPtr)(
                                                        this,
                                                        v7->m_Items[v8],
                                                        this->klass->vtable._5_AddSquare.method);
      LODWORD(max_length) = v7->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
}


void ClassBoardModelBuilder__UnionSquareLine(
        ClassBoardModelBuilder_o *this,
        IClassBoardLineModel_o *line,
        int32_t squareId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *v8; // x0
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v10; // x21
  IClassBoardLineModel_c *klass; // x8
  Il2CppObject *v12; // x20
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  Il2CppClass *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareModel_c **v18; // x10
  __int64 v19; // x0

  if ( (byte_4C3B434 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C32C20(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__);
    sub_1C32C20(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
    byte_4C3B434 = 1;
  }
  v7 = sub_1C32E6C(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_DWORD *)(v7 + 16) = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    0);
  v8 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v12 = v8;
  v13 = *(unsigned __int16 *)&line->klass->_2.rank;
  if ( *(_WORD *)&line->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_10;
    }
    v15 = (__int64)&klass->vtable[*p_offset + 3];
  }
  else
  {
LABEL_10:
    v15 = sub_1C83438(line, IClassBoardLineModel_TypeInfo, 3);
  }
  v8 = (Il2CppObject *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, Il2CppObject *, _QWORD))v15)(
                         line,
                         v12,
                         *(_QWORD *)(v15 + 8));
  if ( !v12 )
LABEL_21:
    sub_1C32E7C(v8);
  v16 = v12->klass;
  v17 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    v18 = (IClassBoardSquareModel_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 16];
  }
  else
  {
LABEL_18:
    v19 = sub_1C83438(v12, IClassBoardSquareModel_TypeInfo, 16);
  }
  (*(void (__fastcall **)(Il2CppObject *, IClassBoardLineModel_o *, _QWORD))v19)(v12, line, *(_QWORD *)(v19 + 8));
}


System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *ClassBoardModelBuilder__get_LineList(
        ClassBoardModelBuilder_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)this->fields.lineList;
}


System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *ClassBoardModelBuilder__get_SquareList(
        ClassBoardModelBuilder_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)this->fields.squareList;
}


void ClassBoardModelBuilder___c__DisplayClass10_0___ctor(
        ClassBoardModelBuilder___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardModelBuilder___c__DisplayClass10_0___UnionSquareLine_b__0(
        ClassBoardModelBuilder___c__DisplayClass10_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardModelBuilder___c__DisplayClass10_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  v4 = this;
  if ( (byte_4C3B438 & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B438 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
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
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(x, *(_QWORD *)(v8 + 8)) == v4->fields.squareId;
}
void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A51C46 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v5);
    byte_4A51C46 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.squareList, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardLineModel_o *v6; // x19
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A51C44 & 1) == 0 )
  {
    sub_1B863B8(&ClassBoardLineModel_TypeInfo, line);
    sub_1B863B8(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v5);
    byte_4A51C44 = 1;
  }
  v6 = (ClassBoardLineModel_o *)sub_1B86604(ClassBoardLineModel_TypeInfo);
  ClassBoardLineModel___ctor(v6, line, 0LL);
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v12 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1B86614(lineList, v7);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)v6,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v6;
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v8, v9);
  }
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
  ClassBoardLockModel_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  _QWORD *v11; // x9
  __int64 squareList_low; // x10
  System_Collections_Generic_List_IClassBoardLineModel__c **v13; // x8

  v4 = this;
  if ( (byte_4A51C45 & 1) == 0 )
  {
    sub_1B863B8(&ClassBoardLockModel_TypeInfo, squareEntity);
    sub_1B863B8(&ClassBoardSquareModel_TypeInfo, v5);
    this = (ClassBoardModelBuilder_o *)sub_1B863B8(
                                         &Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                                         v6);
    byte_4A51C45 = 1;
  }
  if ( !squareEntity )
    goto LABEL_13;
  if ( ClassBoardSquareEntity__get_HasLockId(squareEntity, 0LL) )
  {
    v7 = (ClassBoardLockModel_o *)sub_1B86604(ClassBoardLockModel_TypeInfo);
    ClassBoardLockModel___ctor(v7, squareEntity, 0LL);
  }
  else
  {
    v7 = (ClassBoardLockModel_o *)sub_1B86604(ClassBoardSquareModel_TypeInfo);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v7, squareEntity, 0LL);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this
    || (lineList = this->fields.lineList,
        v11 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++HIDWORD(this->fields.squareList),
        !lineList) )
  {
LABEL_13:
    sub_1B86614(this, squareEntity);
  }
  squareList_low = SLODWORD(this->fields.squareList);
  if ( (unsigned int)squareList_low >= lineList->fields._size )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v7,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &lineList->klass + squareList_low;
    LODWORD(this->fields.squareList) = squareList_low + 1;
    v13[4] = (System_Collections_Generic_List_IClassBoardLineModel__c *)v7;
    sub_1B8635C((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v7, v8, v9);
  }
  return (ClassBoardSquareModel_o *)v7;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x8
  int32_t v8; // w2
  int v9; // w9

  v2 = this;
  if ( (byte_4A51C40 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, method);
    this = (ClassBoardModelBuilder_o *)sub_1B863B8(
                                         &Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__,
                                         v3);
    byte_4A51C40 = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    goto LABEL_10;
  size = lineList->fields._size;
  v6 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0LL);
  squareList = v2->fields.squareList;
  if ( !squareList )
LABEL_10:
    sub_1B86614(this, method);
  v8 = squareList->fields._size;
  v9 = squareList->fields._version + 1;
  squareList->fields._size = 0;
  squareList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)squareList->fields._items, 0, v8, 0LL);
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
  ClassBoardLineEntity_array *Master_object; // x0
  __int64 v7; // x1
  int max_length; // w8
  ClassBoardLineEntity_array *v9; // x20
  unsigned int v10; // w23
  ClassBoardLineEntity_o *v11; // x21
  const MethodInfo *v12; // x3
  IClassBoardLineModel_o *v13; // x22
  const MethodInfo *v14; // x3

  if ( (byte_4A51C42 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ClassBoardLineMaster___, *(_QWORD *)&baseId);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    byte_4A51C42 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardLineEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Master_object = ClassBoardLineMaster__GetAllEntity((ClassBoardLineMaster_o *)Master_object, baseId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  max_length = Master_object->max_length;
  v9 = Master_object;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B8661C(Master_object, v7);
      v11 = v9->m_Items[v10];
      Master_object = (ClassBoardLineEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardLineEntity_o *, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                                      this,
                                                      v11,
                                                      this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v11 )
        break;
      v13 = (IClassBoardLineModel_o *)Master_object;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_object,
        v11->fields.prevSquareId,
        v12);
      ClassBoardModelBuilder__UnionSquareLine(this, v13, v11->fields.nextSquareId, v14);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_14:
    sub_1B86614(Master_object, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardModelBuilder__MakeSquare(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardSquareEntity_array *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  ClassBoardSquareEntity_array *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_4A51C41 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, *(_QWORD *)&baseId);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    byte_4A51C41 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardSquareEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (Master_object = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, baseId, 0LL)) == 0LL )
  {
    sub_1B86614(Master_object, v7);
  }
  v8 = *(_QWORD *)&Master_object->max_length;
  v9 = Master_object;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1B8661C(Master_object, v7);
      Master_object = (ClassBoardSquareEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardSquareEntity_o *, void *))this->klass->vtable._5_AddSquare.method)(
                                                        this,
                                                        v9->m_Items[v10],
                                                        this->klass[1]._1.image);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
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
  __int64 v12; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v16; // x21
  IClassBoardLineModel_c *klass; // x8
  Il2CppObject *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v22; // x8
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0

  if ( (byte_4A51C43 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, line);
    sub_1B863B8(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7);
    sub_1B863B8(&IClassBoardLineModel_TypeInfo, v8);
    sub_1B863B8(&IClassBoardSquareModel_TypeInfo, v9);
    sub_1B863B8(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v10);
    sub_1B863B8(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v11);
    byte_4A51C43 = 1;
  }
  v12 = sub_1B86604(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_DWORD *)(v12 + 16) = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v16 = (System_Func_object__bool__o *)sub_1B86604(System_Func_IClassBoardSquareModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v18 = v13;
  v19 = *(unsigned __int16 *)(&line->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&line->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BD6B4C(line, IClassBoardLineModel_TypeInfo, 3LL);
  }
  v13 = (Il2CppObject *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, Il2CppObject *, _QWORD))p_method)(
                          line,
                          v18,
                          *(_QWORD *)(p_method + 8));
  if ( !v18 )
LABEL_21:
    sub_1B86614(v13, v14);
  v22 = v18->klass;
  v23 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    v24 = (IClassBoardSquareModel_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_18;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 14].method;
  }
  else
  {
LABEL_18:
    v25 = sub_1BD6B4C(v18, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, IClassBoardLineModel_o *, _QWORD))v25)(v18, line, *(_QWORD *)(v25 + 8));
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
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_4A51C47 & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_1B863B8(&IClassBoardSquareModel_TypeInfo, x);
    byte_4A51C47 = 1;
  }
  if ( !x )
    sub_1B86614(this, x);
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
    p_method = sub_1BD6B4C(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v4->fields.squareId;
}
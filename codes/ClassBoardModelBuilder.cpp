void __fastcall ClassBoardModelBuilder___ctor(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B196EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v9, v10);
    byte_4B196EC = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  this->fields.squareList = (struct System_Collections_Generic_List_IClassBoardSquareModel__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardLineModel_o *__fastcall ClassBoardModelBuilder__AddLine(
        ClassBoardModelBuilder_o *this,
        ClassBoardLineEntity_o *line,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  ClassBoardLineModel_o *v8; // x19
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *lineList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B196EA & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardLineModel_TypeInfo, line, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, v6, v7);
    byte_4B196EA = 1;
  }
  v8 = (ClassBoardLineModel_o *)sub_1BCAA2C(ClassBoardLineModel_TypeInfo, line, method, v3);
  ClassBoardLineModel___ctor(v8, line, v9);
  lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
  if ( !lineList
    || (items = lineList->fields._items,
        v19 = Method_System_Collections_Generic_List_IClassBoardLineModel__Add__,
        ++lineList->fields._version,
        !items) )
  {
    sub_1BCAA3C(lineList, v10);
  }
  size = lineList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      lineList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    lineList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v11, v12, v13, v14, v15, v16);
  }
  return v8;
}


ClassBoardSquareModel_o *__fastcall ClassBoardModelBuilder__AddSquare(
        ClassBoardModelBuilder_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ClassBoardLockModel_o *v12; // x20
  const MethodInfo *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  _QWORD *v22; // x9
  __int64 squareList_low; // x10
  System_Collections_Generic_List_IClassBoardLineModel__c **v24; // x8

  v4 = this;
  if ( (byte_4B196EB & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardLockModel_TypeInfo, squareEntity, method);
    sub_1BCA7E0(&ClassBoardSquareModel_TypeInfo, v5, v6);
    this = (ClassBoardModelBuilder_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
                                         v7,
                                         v8);
    byte_4B196EB = 1;
  }
  if ( !squareEntity )
    goto LABEL_13;
  if ( ClassBoardSquareEntity__get_HasLockId(squareEntity, 0LL) )
  {
    v12 = (ClassBoardLockModel_o *)sub_1BCAA2C(ClassBoardLockModel_TypeInfo, v9, v10, v11);
    ClassBoardLockModel___ctor(v12, squareEntity, v13);
  }
  else
  {
    v12 = (ClassBoardLockModel_o *)sub_1BCAA2C(ClassBoardSquareModel_TypeInfo, v9, v10, v11);
    ClassBoardSquareModel___ctor((ClassBoardSquareModel_o *)v12, squareEntity, v20);
  }
  this = (ClassBoardModelBuilder_o *)v4->fields.squareList;
  if ( !this
    || (lineList = this->fields.lineList,
        v22 = Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__,
        ++HIDWORD(this->fields.squareList),
        !lineList) )
  {
LABEL_13:
    sub_1BCAA3C(this, squareEntity);
  }
  squareList_low = SLODWORD(this->fields.squareList);
  if ( (unsigned int)squareList_low >= lineList->fields._size )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &lineList->klass + squareList_low;
    LODWORD(this->fields.squareList) = squareList_low + 1;
    v24[4] = (System_Collections_Generic_List_IClassBoardLineModel__c *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v14, v15, v16, v17, v18, v19);
  }
  return (ClassBoardSquareModel_o *)v12;
}


void __fastcall ClassBoardModelBuilder__Clear(ClassBoardModelBuilder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardModelBuilder_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x8
  int32_t v10; // w2
  int v11; // w9

  v3 = this;
  if ( (byte_4B196E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Clear__, method, v2);
    this = (ClassBoardModelBuilder_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_IClassBoardLineModel__Clear__,
                                         v4,
                                         v5);
    byte_4B196E6 = 1;
  }
  lineList = v3->fields.lineList;
  if ( !lineList )
    goto LABEL_10;
  size = lineList->fields._size;
  v8 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0LL);
  squareList = v3->fields.squareList;
  if ( !squareList )
LABEL_10:
    sub_1BCAA3C(this, method);
  v10 = squareList->fields._size;
  v11 = squareList->fields._version + 1;
  squareList->fields._size = 0;
  squareList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)squareList->fields._items, 0, v10, 0LL);
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
  __int64 v6; // x2
  ClassBoardLineEntity_array *Master_object; // x0
  __int64 v8; // x1
  int max_length; // w8
  ClassBoardLineEntity_array *v10; // x20
  unsigned int v11; // w23
  ClassBoardLineEntity_o *v12; // x21
  const MethodInfo *v13; // x3
  IClassBoardLineModel_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B196E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardLineMaster___, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B196E8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseId);
  Master_object = (ClassBoardLineEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardLineMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Master_object = ClassBoardLineMaster__GetAllEntity((ClassBoardLineMaster_o *)Master_object, baseId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  max_length = Master_object->max_length;
  v10 = Master_object;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1BCAA44(Master_object, v8);
      v12 = v10->m_Items[v11];
      Master_object = (ClassBoardLineEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardLineEntity_o *, Il2CppMethodPointer))this->klass->vtable._4_AddLine.method)(
                                                      this,
                                                      v12,
                                                      this->klass->vtable._5_AddSquare.methodPtr);
      if ( !v12 )
        break;
      v14 = (IClassBoardLineModel_o *)Master_object;
      ClassBoardModelBuilder__UnionSquareLine(
        this,
        (IClassBoardLineModel_o *)Master_object,
        v12->fields.prevSquareId,
        v13);
      ClassBoardModelBuilder__UnionSquareLine(this, v14, v12->fields.nextSquareId, v15);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_1BCAA3C(Master_object, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardModelBuilder__MakeSquare(
        ClassBoardModelBuilder_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ClassBoardSquareEntity_array *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  ClassBoardSquareEntity_array *v10; // x20
  unsigned __int64 v11; // x21

  if ( (byte_4B196E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B196E7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseId);
  Master_object = (ClassBoardSquareEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (Master_object = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, baseId, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v8);
  }
  v9 = *(_QWORD *)&Master_object->max_length;
  v10 = Master_object;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1BCAA44(Master_object, v8);
      Master_object = (ClassBoardSquareEntity_array *)((__int64 (__fastcall *)(ClassBoardModelBuilder_o *, ClassBoardSquareEntity_o *, void *))this->klass->vtable._5_AddSquare.method)(
                                                        this,
                                                        v10->m_Items[v11],
                                                        this->klass[1]._1.image);
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  struct System_Collections_Generic_List_IClassBoardSquareModel__o *squareList; // x20
  System_Func_object__bool__o *v23; // x21
  IClassBoardLineModel_c *klass; // x8
  Il2CppObject *v25; // x20
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v29; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **v31; // x10
  __int64 v32; // x0

  if ( (byte_4B196E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, line, *(_QWORD *)&squareId);
    sub_1BCA7E0(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v9, v10);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__, v13, v14);
    sub_1BCA7E0(&ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, v15, v16);
    byte_4B196E9 = 1;
  }
  v17 = sub_1BCAA2C(ClassBoardModelBuilder___c__DisplayClass10_0_TypeInfo, line, *(_QWORD *)&squareId, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_21;
  *(_DWORD *)(v17 + 16) = squareId;
  if ( squareId < 1 )
    return;
  squareList = this->fields.squareList;
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IClassBoardSquareModel__bool__TypeInfo, v19, v20, v21);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v17,
    Method_ClassBoardModelBuilder___c__DisplayClass10_0__UnionSquareLine_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)squareList,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
  if ( !line )
    goto LABEL_21;
  klass = line->klass;
  v25 = v18;
  v26 = *(unsigned __int16 *)(&line->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&line->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 3].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(line, IClassBoardLineModel_TypeInfo, 3LL);
  }
  v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, Il2CppObject *, _QWORD))p_method)(
                          line,
                          v25,
                          *(_QWORD *)(p_method + 8));
  if ( !v25 )
LABEL_21:
    sub_1BCAA3C(v18, v19);
  v29 = v25->klass;
  v30 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    v31 = (IClassBoardSquareModel_c **)&v29->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_18;
    }
    v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 14].method;
  }
  else
  {
LABEL_18:
    v32 = sub_1C1C7C0(v25, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, IClassBoardLineModel_o *, _QWORD))v32)(v25, line, *(_QWORD *)(v32 + 8));
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
  if ( (byte_4B196ED & 1) == 0 )
  {
    this = (ClassBoardModelBuilder___c__DisplayClass10_0_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, x, method);
    byte_4B196ED = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
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
  return (*(unsigned int (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) == v4->fields.squareId;
}
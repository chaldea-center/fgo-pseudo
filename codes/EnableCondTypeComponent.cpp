void __fastcall EnableCondTypeComponent___ctor(EnableCondTypeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1BA73 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo, v3);
    byte_4B1BA73 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__);
  this->fields.condDataList = (struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.condDataList, (int32_t)v4, v5, v6);
  this->fields.visibleIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EnableCondTypeComponent__IsOpen(EnableCondTypeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *condDataList; // x8
  System_Collections_Generic_Dictionary_int__bool__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *v20; // x19
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_object__o *v23; // x21

  if ( (byte_4B1BA72 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_EnableCondTypeComponent_CondData__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___, v7);
    sub_1BCAFF8(&System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData__get_Count__, v9);
    sub_1BCAFF8(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__, v10);
    sub_1BCAFF8(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__, v11);
    sub_1BCAFF8(&EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo, v12);
    byte_4B1BA72 = 1;
  }
  v13 = sub_1BCB244(EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  condDataList = this->fields.condDataList;
  if ( !condDataList )
    goto LABEL_9;
  if ( condDataList->fields._size )
  {
    v17 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v17,
      (const MethodInfo_3311D70 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 16) = v17;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v17, v18, v19);
      v20 = this->fields.condDataList;
      v21 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        (Il2CppObject *)v13,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__,
        0LL);
      v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                             (System_Func_TSource__bool__o *)v21,
                                                             (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___);
      v23 = (System_Action_object__o *)sub_1BCB244(System_Action_EnableCondTypeComponent_CondData__TypeInfo);
      System_Action_object____ctor(
        v23,
        (Il2CppObject *)v13,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v22,
        (System_Action_T__o *)v23,
        (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___);
      v14 = *(System_Collections_Generic_Dictionary_int__bool__o **)(v13 + 16);
      if ( v14 )
        return System_Collections_Generic_Dictionary_int__bool___ContainsValue(
                 v14,
                 1,
                 (const MethodInfo_3312968 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__);
    }
LABEL_9:
    sub_1BCB254(v14, v15);
  }
  return 1;
}


void __fastcall EnableCondTypeComponent_CondData___ctor(
        EnableCondTypeComponent_CondData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EnableCondTypeComponent___c__DisplayClass2_0___ctor(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EnableCondTypeComponent___c__DisplayClass2_0___IsOpen_b__0(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        EnableCondTypeComponent_CondData_o *x,
        const MethodInfo *method)
{
  EnableCondTypeComponent___c__DisplayClass2_0_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_4B1BA74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, x);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1BCAFF8(
                                                               &Method_System_Collections_Generic_Dictionary_int__bool__get_Item__,
                                                               v5);
    byte_4B1BA74 = 1;
  }
  if ( !x )
    goto LABEL_9;
  this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
  if ( !this )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         (System_Collections_Generic_Dictionary_int__bool__o *)this,
         x->fields.condGroup,
         (const MethodInfo_3312944 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
    if ( this )
      return System_Collections_Generic_Dictionary_int__bool___get_Item(
               (System_Collections_Generic_Dictionary_int__bool__o *)this,
               x->fields.condGroup,
               (const MethodInfo_33126A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
LABEL_9:
    sub_1BCB254(this, x);
  }
  return 1;
}


void __fastcall EnableCondTypeComponent___c__DisplayClass2_0___IsOpen_b__1(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        EnableCondTypeComponent_CondData_o *x,
        const MethodInfo *method)
{
  EnableCondTypeComponent___c__DisplayClass2_0_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__bool__o *groupStatus; // x21
  int32_t condGroup; // w20
  int32_t condType; // w22
  int32_t condId; // w23
  int64_t condNum; // x19

  v4 = this;
  if ( (byte_4B1BA75 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, x);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1BCAFF8(
                                                               &Method_System_Collections_Generic_Dictionary_int__bool__set_Item__,
                                                               v5);
    byte_4B1BA75 = 1;
  }
  if ( !x )
    goto LABEL_8;
  groupStatus = v4->fields.groupStatus;
  condGroup = x->fields.condGroup;
  condType = x->fields.condType;
  condId = x->fields.condId;
  condNum = x->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
  if ( !groupStatus )
LABEL_8:
    sub_1BCB254(this, x);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    groupStatus,
    condGroup,
    (unsigned __int8)this & 1,
    (const MethodInfo_3312730 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
}
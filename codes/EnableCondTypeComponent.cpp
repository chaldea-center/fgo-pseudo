void __fastcall EnableCondTypeComponent___ctor(EnableCondTypeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC7234 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo, v3);
    byte_4BC7234 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__);
  this->fields.condDataList = (struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.condDataList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *v24; // x19
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_T__o *v26; // x19
  System_Action_object__o *v27; // x21

  if ( (byte_4BC7233 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_EnableCondTypeComponent_CondData__TypeInfo, method);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___, v7);
    sub_1C1ABD4(&System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData__get_Count__, v9);
    sub_1C1ABD4(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__, v10);
    sub_1C1ABD4(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__, v11);
    sub_1C1ABD4(&EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo, v12);
    byte_4BC7233 = 1;
  }
  v13 = sub_1C1AE20(EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  condDataList = this->fields.condDataList;
  if ( !condDataList )
    goto LABEL_9;
  if ( condDataList->fields._size )
  {
    v17 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v17,
      (const MethodInfo_3292D60 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 16) = v17;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v17, v18, v19, v20, v21, v22, v23);
      v24 = this->fields.condDataList;
      v25 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v25,
        (Il2CppObject *)v13,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__,
        0LL);
      v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                             (System_Func_TSource__bool__o *)v25,
                                                             (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___);
      v27 = (System_Action_object__o *)sub_1C1AE20(System_Action_EnableCondTypeComponent_CondData__TypeInfo);
      System_Action_object____ctor(
        v27,
        (Il2CppObject *)v13,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v26,
        (System_Action_T__o *)v27,
        (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___);
      v14 = *(System_Collections_Generic_Dictionary_int__bool__o **)(v13 + 16);
      if ( v14 )
        return System_Collections_Generic_Dictionary_int__bool___ContainsValue(
                 v14,
                 1,
                 (const MethodInfo_3293958 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__);
    }
LABEL_9:
    sub_1C1AE30(v14, v15);
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
  if ( (byte_4BC7235 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, x);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1C1ABD4(
                                                               &Method_System_Collections_Generic_Dictionary_int__bool__get_Item__,
                                                               v5);
    byte_4BC7235 = 1;
  }
  if ( !x )
    goto LABEL_9;
  this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
  if ( !this )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         (System_Collections_Generic_Dictionary_int__bool__o *)this,
         x->fields.condGroup,
         (const MethodInfo_3293934 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
    if ( this )
      return System_Collections_Generic_Dictionary_int__bool___get_Item(
               (System_Collections_Generic_Dictionary_int__bool__o *)this,
               x->fields.condGroup,
               (const MethodInfo_3293690 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
LABEL_9:
    sub_1C1AE30(this, x);
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
  if ( (byte_4BC7236 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, x);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1C1ABD4(
                                                               &Method_System_Collections_Generic_Dictionary_int__bool__set_Item__,
                                                               v5);
    byte_4BC7236 = 1;
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
    sub_1C1AE30(this, x);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    groupStatus,
    condGroup,
    (unsigned __int8)this & 1,
    (const MethodInfo_3293720 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
}
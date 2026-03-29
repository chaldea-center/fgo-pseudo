void EnableCondTypeComponent___ctor(EnableCondTypeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FE74 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo);
    byte_4D2FE74 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EnableCondTypeComponent_CondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData___ctor__);
  this->fields.condDataList = (struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.condDataList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.visibleIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EnableCondTypeComponent__IsOpen(EnableCondTypeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *condDataList; // x8
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_Generic_List_EnableCondTypeComponent_CondData__o *v14; // x19
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_T__o *v16; // x19
  System_Action_object__o *v17; // x21

  if ( (byte_4D2FE73 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EnableCondTypeComponent_CondData__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___);
    sub_1C93AD4(&System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EnableCondTypeComponent_CondData__get_Count__);
    sub_1C93AD4(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__);
    sub_1C93AD4(&Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__);
    sub_1C93AD4(&EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo);
    byte_4D2FE73 = 1;
  }
  v3 = sub_1C93D20(EnableCondTypeComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  condDataList = this->fields.condDataList;
  if ( !condDataList )
    goto LABEL_9;
  if ( condDataList->fields._size )
  {
    v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v7,
      (const MethodInfo_34ADB50 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 16) = v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v7, v8, v9, v10, v11, v12, v13);
      v14 = this->fields.condDataList;
      v15 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EnableCondTypeComponent_CondData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__0__,
        0);
      v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                             (System_Func_TSource__bool__o *)v15,
                                                             (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EnableCondTypeComponent_CondData___);
      v17 = (System_Action_object__o *)sub_1C93D20(System_Action_EnableCondTypeComponent_CondData__TypeInfo);
      System_Action_object____ctor(
        v17,
        (Il2CppObject *)v3,
        Method_EnableCondTypeComponent___c__DisplayClass2_0__IsOpen_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v16,
        (System_Action_T__o *)v17,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_EnableCondTypeComponent_CondData___);
      v4 = *(System_Collections_Generic_Dictionary_int__bool__o **)(v3 + 16);
      if ( v4 )
        return System_Collections_Generic_Dictionary_int__bool___ContainsValue(
                 v4,
                 1,
                 (const MethodInfo_34AE748 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsValue__);
    }
LABEL_9:
    sub_1C93D2C(v4, v5);
  }
  return 1;
}


void EnableCondTypeComponent_CondData___ctor(EnableCondTypeComponent_CondData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EnableCondTypeComponent___c__DisplayClass2_0___ctor(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EnableCondTypeComponent___c__DisplayClass2_0___IsOpen_b__0(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        EnableCondTypeComponent_CondData_o *x,
        const MethodInfo *method)
{
  EnableCondTypeComponent___c__DisplayClass2_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2FE75 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    byte_4D2FE75 = 1;
  }
  if ( !x )
    goto LABEL_9;
  this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
  if ( !this )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         (System_Collections_Generic_Dictionary_int__bool__o *)this,
         x->fields.condGroup,
         (const MethodInfo_34AE724 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)v4->fields.groupStatus;
    if ( this )
      return System_Collections_Generic_Dictionary_int__bool___get_Item(
               (System_Collections_Generic_Dictionary_int__bool__o *)this,
               x->fields.condGroup,
               (const MethodInfo_34AE480 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
LABEL_9:
    sub_1C93D2C(this, x);
  }
  return 1;
}


void EnableCondTypeComponent___c__DisplayClass2_0___IsOpen_b__1(
        EnableCondTypeComponent___c__DisplayClass2_0_o *this,
        EnableCondTypeComponent_CondData_o *x,
        const MethodInfo *method)
{
  EnableCondTypeComponent___c__DisplayClass2_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__bool__o *groupStatus; // x21
  int32_t condGroup; // w20
  int32_t condType; // w22
  int32_t condId; // w23
  int64_t condNum; // x19

  v4 = this;
  if ( (byte_4D2FE76 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_4D2FE76 = 1;
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
  this = (EnableCondTypeComponent___c__DisplayClass2_0_o *)CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
  if ( !groupStatus )
LABEL_8:
    sub_1C93D2C(this, x);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    groupStatus,
    condGroup,
    (unsigned __int8)this & 1,
    (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
}
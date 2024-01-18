void __fastcall WarBoardPartyOrganizationListViewManager___ctor(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationListViewManager__CreateList(
        WarBoardPartyOrganizationListViewManager_o *this,
        WarBoardPartyListViewItem_array *memberItemList,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_4186572 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, memberItemList);
    byte_4186572 = 1;
  }
  this->fields.onTapMember = onTapMember;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onTapMember,
    (System_Int32_array **)onTapMember,
    (System_String_array **)onTapMember,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( memberItemList )
  {
    v13 = *(_QWORD *)&memberItemList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( v14 >= (unsigned int)v13 )
        {
          v17 = sub_B2C460(v11);
          sub_B2C400(v17, 0LL);
        }
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B2C434(0LL, v12);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)memberItemList->m_Items[v14],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v13) = memberItemList->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v13 );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarBoardPartyOrganizationListViewManager__SetEnableScroll(this, 0, v16);
}


void __fastcall WarBoardPartyOrganizationListViewManager__DestroyList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.onTapMember = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onTapMember, 0LL, v3, v4, v5, v6, v7, v8);
}


System_Collections_Generic_List_WarBoardPartyListViewObject__o *__fastcall WarBoardPartyOrganizationListViewManager__GetObjectList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186576 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186576 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)current,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v18 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v18 )
      {
        if ( !v11 )
          sub_B2C434(v18, v19);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarBoardPartyListViewObject__o *)v11;
}


void __fastcall WarBoardPartyOrganizationListViewManager__OnClickListView(
        WarBoardPartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewManager__RequestListObject(
        WarBoardPartyOrganizationListViewManager_o *this,
        int32_t mode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_WarBoardPartyListViewObject__o *ObjectList; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186574 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__, v8);
    byte_4186574 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = WarBoardPartyOrganizationListViewManager__GetObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B2C434(0LL, v11);
    WarBoardPartyListViewObject__Init(
      (WarBoardPartyListViewObject_o *)v13.fields.current,
      mode,
      this->fields.onTapMember,
      v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewManager__SetEnableScroll(
        WarBoardPartyOrganizationListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4186573 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4186573 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewManager__SetMode(
        WarBoardPartyOrganizationListViewManager_o *this,
        int32_t mode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  int32_t v5; // w1
  UIScrollView_o *scrollView; // x0

  switch ( mode )
  {
    case 3:
      v5 = 2;
      break;
    case 2:
      v5 = 1;
      break;
    case 1:
      v5 = 0;
      break;
    default:
      goto LABEL_8;
  }
  WarBoardPartyOrganizationListViewManager__RequestListObject(this, v5, onTapMember, method);
LABEL_8:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B2C434(0LL, *(_QWORD *)&mode);
  UIScrollView__UpdatePosition(scrollView, 0LL);
}


void __fastcall WarBoardPartyOrganizationListViewManager__SetObjectItem(
        WarBoardPartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationListViewManager_o *v5; // x20
  __int64 v6; // x10

  v5 = this;
  if ( (byte_4186575 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewManager_o *)sub_B2C35C(&WarBoardPartyListViewObject_TypeInfo, obj);
    byte_4186575 = 1;
  }
  if ( !obj
    || (v6 = *(&WarBoardPartyListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarBoardPartyListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarBoardPartyListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  WarBoardPartyListViewObject__Init((WarBoardPartyListViewObject_o *)obj, 0, v5->fields.onTapMember, method);
}
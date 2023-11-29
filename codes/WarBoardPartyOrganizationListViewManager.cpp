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
  __int64 v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v17; // x2

  if ( (byte_40F85BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, memberItemList);
    byte_40F85BB = 1;
  }
  this->fields.onTapMember = onTapMember;
  sub_B16F98(
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
    v14 = *(_QWORD *)&memberItemList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( v15 >= (unsigned int)v14 )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)memberItemList->m_Items[v15],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v14) = memberItemList->max_length;
        ++v15;
      }
      while ( (__int64)v15 < (int)v14 );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarBoardPartyOrganizationListViewManager__SetEnableScroll(this, 0, v17);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onTapMember, 0LL, v3, v4, v5, v6, v7, v8);
}


System_Collections_Generic_List_WarBoardPartyListViewObject__o *__fastcall WarBoardPartyOrganizationListViewManager__GetObjectList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F85BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F85BF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !v14 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarBoardPartyListViewObject__o *)v14;
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F85BD & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__, v8);
    byte_40F85BD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = WarBoardPartyOrganizationListViewManager__GetObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    WarBoardPartyListViewObject__Init(
      (WarBoardPartyListViewObject_o *)v11.fields.current,
      mode,
      this->fields.onTapMember,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewManager__SetEnableScroll(
        WarBoardPartyOrganizationListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_40F85BC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnable);
    byte_40F85BC = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v6, isEnable, 0LL);
  }
}


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
    sub_B170D4();
  UIScrollView__UpdatePosition(scrollView, 0LL);
}


void __fastcall WarBoardPartyOrganizationListViewManager__SetObjectItem(
        WarBoardPartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10

  if ( (byte_40F85BE & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyListViewObject_TypeInfo, obj);
    byte_40F85BE = 1;
  }
  if ( !obj
    || (v6 = *(&WarBoardPartyListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarBoardPartyListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarBoardPartyListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  WarBoardPartyListViewObject__Init((WarBoardPartyListViewObject_o *)obj, 0, this->fields.onTapMember, method);
}
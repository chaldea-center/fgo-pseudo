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

  if ( (byte_42E75F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewItem__Add__,
      (_DWORD)memberItemList,
      (_DWORD)onTapMember,
      method);
    byte_42E75F8 = 1;
  }
  this->fields.onTapMember = onTapMember;
  sub_B5D560(
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
          v17 = sub_B5D6C8(v11);
          sub_B5D668(v17, 0LL);
        }
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v12);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)memberItemList->m_Items[v14],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onTapMember, 0LL, v3, v4, v5, v6, v7, v8);
}


System_Collections_Generic_List_WarBoardPartyListViewObject__o *__fastcall WarBoardPartyOrganizationListViewManager__GetObjectList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E75FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E75FC = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v40.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)current,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v36 )
      {
        if ( !v29 )
          sub_B5D69C(v36, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarBoardPartyListViewObject__o *)v29;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_WarBoardPartyListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E75FA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__,
      mode,
      (_DWORD)onTapMember,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__, v12, v13, v14);
    byte_42E75FA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = WarBoardPartyOrganizationListViewManager__GetObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v17);
    WarBoardPartyListViewObject__Init(
      (WarBoardPartyListViewObject_o *)v19.fields.current,
      mode,
      this->fields.onTapMember,
      v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
}


void __fastcall WarBoardPartyOrganizationListViewManager__SetEnableScroll(
        WarBoardPartyOrganizationListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0

  if ( (byte_42E75F9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnable, (_DWORD)method, v3);
    byte_42E75F9 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_Behaviour__set_enabled(v8, isEnable, 0LL);
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
    sub_B5D69C(0LL, *(_QWORD *)&mode);
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
  if ( (byte_42E75FB & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewManager_o *)sub_B5D5C4(
                                                           &WarBoardPartyListViewObject_TypeInfo,
                                                           (_DWORD)obj,
                                                           (_DWORD)item,
                                                           method);
    byte_42E75FB = 1;
  }
  if ( !obj
    || (v6 = *(&WarBoardPartyListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarBoardPartyListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarBoardPartyListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  WarBoardPartyListViewObject__Init((WarBoardPartyListViewObject_o *)obj, 0, v5->fields.onTapMember, method);
}
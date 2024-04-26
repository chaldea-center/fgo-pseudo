void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4352E74 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
    byte_4352E74 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__Awake(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *mainInfo; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  System_Collections_Generic_List_int__o *v27; // x22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v31; // x3
  unsigned __int64 v32; // x27
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *v33; // x24
  const MethodInfo *v34; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x26
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *figureArray; // x25
  UnityEngine_Object_o *v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t id; // w8
  EventInfoTipsArchiveListViewObject_o *v48; // x25
  bool v49; // w24
  const MethodInfo *v50; // x5
  float v51; // s0
  const MethodInfo *v52; // x1
  int32_t Size; // w0
  int v54; // w8
  int v55; // w24
  float v56; // s10
  int32_t layer; // w0
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v62; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v65; // x23
  EventDelegate_Callback_o *v66; // x22
  struct UIScrollBar_o *v67; // x8
  System_Collections_Generic_List_EventDelegate__o *v68; // x21
  EventDelegate_Callback_o *v69; // x22
  struct UIScrollBar_o *v70; // x8
  System_Collections_Generic_List_EventDelegate__o *v71; // x19
  EventDelegate_Callback_o *v72; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-64h]
  System_Nullable_Vector3__o v74; // 0:x3.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352E6B & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
    sub_B70694(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__);
    sub_B70694(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__);
    sub_B70694(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_B70694(&Method_UIScrollView_OnScrollBar__);
    byte_4352E6B = 1;
  }
  v9 = sub_B70764(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_44;
  *(_QWORD *)(v9 + 16) = scrollAction;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)scrollAction,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v18);
  this->fields.mainInfo = item;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_44;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, v25);
  if ( IdList )
  {
    if ( this->fields.viewObjectInfoList )
    {
      v27 = IdList;
      zero = UnityEngine_Vector3__get_zero(0LL);
      x = zero.fields.x;
      y = zero.fields.y;
      z = zero.fields.z;
      DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v27, this->fields.mainInfo, v31);
      if ( v27->fields._size >= 1 )
      {
        v32 = 0LL;
        do
        {
          v33 = (EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *)sub_B70764(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(v33, 0LL);
          if ( v32 >= (unsigned int)v27->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !v33 )
            goto LABEL_44;
          v11 = (unsigned int)v27->fields._items->m_Items[v32 + 1];
          v33->fields.id = v11;
          if ( !item )
            goto LABEL_44;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v11, v34);
          if ( StateData )
          {
            if ( StateData->fields.index >= 1 )
            {
              viewObjectInfoList = this->fields.viewObjectInfoList;
              v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                v37,
                (Il2CppObject *)v33,
                Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
                (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
              USFGOPlayStandardCutInLimitCount_OverwriteCutIn = System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                  (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)viewObjectInfoList,
                                                                  (System_Predicate_T__o *)v37,
                                                                  (const MethodInfo_1FCAC6C *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
              if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
              {
                figureArray = (UnityEngine_UI_Dropdown_DropdownItem_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields.figureArray;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v40 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                figureArray,
                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                mainInfo = (void *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
                if ( ((unsigned __int8)mainInfo & 1) == 0 )
                {
                  if ( !v40 )
                    goto LABEL_44;
                  mainInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v40,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                  if ( !mainInfo )
                    goto LABEL_44;
                  id = v33->fields.id;
                  v48 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                  *((_DWORD *)mainInfo + 8) = id;
                  *((_QWORD *)mainInfo + 5) = item;
                  v49 = id == DispLastId;
                  sub_B70630(
                    (BattleServantConfConponent_o *)((char *)mainInfo + 40),
                    (System_Int32_array **)item,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46);
                  *(_QWORD *)&v74.fields.value.fields.x = 0LL;
                  *(_QWORD *)&v74.fields.value.fields.z = 0LL;
                  v48->fields.isLast = v49;
                  EventInfoTipsArchiveListViewObject__Init(v48, 2, 0LL, v51, v74, v50);
                  Size = EventInfoTipsArchiveListViewObject__GetSize(v48, v52);
                  v54 = Size >= 0 ? Size : Size + 1;
                  v55 = v54 >> 1;
                  v56 = y - (float)(v54 >> 1);
                  GameObjectExtensions__SetParent_32503320(
                    (UnityEngine_GameObject_o *)v40,
                    this->fields.listParent,
                    0LL);
                  v76.fields.x = x;
                  v76.fields.y = v56;
                  v76.fields.z = z;
                  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v40, v76, 0LL);
                  GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v40, 0LL);
                  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v40, 0LL);
                  mainInfo = this->fields.listParent;
                  if ( !mainInfo )
                    goto LABEL_44;
                  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v40, layer, 0LL);
                  EventInfoTipsArchiveListViewObject__SetBaseTransform(v48, v58);
                  EventInfoTipsArchiveListViewObject__SetManager(v48, this, v59);
                  mainInfo = this->fields.objectList;
                  if ( !mainInfo )
                    goto LABEL_44;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainInfo,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
                  y = v56 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v48, v60) + v55);
                }
              }
            }
          }
        }
        while ( (__int64)++v32 < v27->fields._size );
      }
    }
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    mainInfo = this->fields.scrollView;
    if ( !mainInfo )
      goto LABEL_44;
    UIScrollView__ResetPosition((UIScrollView_o *)mainInfo, 0LL);
  }
  mainInfo = this->fields.scrollView;
  if ( !mainInfo )
    goto LABEL_44;
  mainInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainInfo, 0LL);
  if ( !mainInfo )
    goto LABEL_44;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)mainInfo,
                                         0LL);
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v62);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_44;
  onChange = scrollBar->fields.onChange;
  v65 = (Il2CppObject *)this->fields.scrollView;
  v66 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v66, v65, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  mainInfo = EventDelegate__Add(onChange, v66, 0LL);
  v67 = this->fields.scrollBar;
  if ( !v67
    || (v68 = v67->fields.onChange,
        v69 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v69,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v68, v69, 0LL),
        (v70 = this->fields.scrollBar) == 0LL) )
  {
LABEL_44:
    sub_B7076C(mainInfo, v11);
  }
  v71 = v70->fields.onChange;
  v72 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v72,
    (Il2CppObject *)v9,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v71, v72, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4352E6E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E6E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B7076C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v8.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_B7076C(objectList, method);
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewManager__GetDispLastId(
        EventInfoTipsArchiveListViewManager_o *this,
        System_Collections_Generic_List_int__o *idList,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  EventInfoTipsArchiveListViewManager_o *v6; // x21
  int32_t id; // w22
  unsigned __int64 v8; // x26
  EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *v9; // x23
  const MethodInfo *v10; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *viewObjectInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x25

  v5 = idList;
  v6 = this;
  if ( (byte_4352E6D & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
    sub_B70694(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B70694(&EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
    byte_4352E6D = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size >= 1 )
  {
    id = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *)sub_B70764(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(v9, 0LL);
      if ( v8 >= (unsigned int)v5->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !v9 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)v5->fields._items->m_Items[v8 + 1];
      v9->fields.id = (int)idList;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)idList, v10);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)v6->fields.viewObjectInfoList;
          v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v13,
            (Il2CppObject *)v9,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
          if ( System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v13,
                 (const MethodInfo_1FCAC6C *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            id = v9->fields.id;
          }
        }
      }
      if ( (__int64)++v8 >= v5->fields._size )
        return id;
    }
LABEL_18:
    sub_B7076C(this, idList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v6; // s1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x20
  int size; // w22
  __int64 v9; // x24
  float v10; // s9
  __int64 v11; // x8
  EventInfoTipsArchiveListViewObject_o *v12; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v14; // x1
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v16; // x2
  float height; // s0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v18; // x20
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  if ( (byte_4352E72 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E72 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_32;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_32;
    *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)scrollView,
                                            0LL);
    objectList = this->fields.objectList;
    if ( !objectList )
      goto LABEL_32;
    size = objectList->fields._size;
    if ( size >= 1 )
    {
      v9 = 0LL;
      v10 = v6 - this->fields.initialScrollPosition.fields.y;
      do
      {
        if ( objectList->fields._size <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v11 = (__int64)objectList->fields._items + 8 * v9;
        v12 = *(EventInfoTipsArchiveListViewObject_o **)(v11 + 32);
        if ( size - 1 == (_DWORD)v9 )
        {
          if ( !v12 )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewObject__GetSize(
                                                    *(EventInfoTipsArchiveListViewObject_o **)(v11 + 32),
                                                    v4);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[24LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
            if ( !scrollView )
              break;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v10 = v10 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v12, v14));
          }
        }
        else if ( !v12 )
        {
          break;
        }
        scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
        if ( !scrollView )
          break;
        ReadEndValue_k__BackingField = v12->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v10 && v10 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = (UnityEngine_Component_o *)this->fields.mainInfo;
          if ( !scrollView )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem__GetStateData(
                                                    (EventInfoTipsArchiveListViewItem_o *)scrollView,
                                                    v12->fields.id,
                                                    v16);
          if ( scrollView )
          {
            v18 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView;
            scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                      (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView,
                                                      0LL);
            if ( ((unsigned __int8)scrollView & 1) != 0 )
            {
              EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v18, 0, 0LL);
              mainInfo = this->fields.mainInfo;
              if ( !mainInfo )
                break;
              tipsArchiveStateManager = mainInfo->fields.tipsArchiveStateManager;
              if ( !tipsArchiveStateManager )
                break;
              tipsArchiveStateManager->fields.isModfiy = 1;
            }
          }
        }
        if ( (int)++v9 >= size )
          return;
        objectList = this->fields.objectList;
      }
      while ( objectList );
LABEL_32:
      sub_B7076C(scrollView, v4);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnClickListView(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v9; // x19
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  int32_t Kind; // w2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B7076C(v12, v13);
      Kind = EventInfoTipsArchiveListViewObject__GetKind(obj, v13);
      EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(v9, 0, Kind, 0LL);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnMoveEnd(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4352E71 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E71 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B7076C(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__RequestListObject(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  float v12; // s0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v14; // 0:x3.16

  if ( (byte_4352E70 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_B70694(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4352E70 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      objectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v9, v10);
      *(_QWORD *)&v14.fields.value.fields.x = 0LL;
      *(_QWORD *)&v14.fields.value.fields.z = 0LL;
      EventInfoTipsArchiveListViewObject__Init((EventInfoTipsArchiveListViewObject_o *)current, mode, v8, v12, v14, v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__SetMode(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_27327296(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_27327296(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4352E6F & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    byte_4352E6F = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B7076C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  switch ( mode )
  {
    case 3:
      v6 = 4;
      goto LABEL_10;
    case 2:
      v6 = 2;
      goto LABEL_10;
    case 1:
      v6 = 3;
LABEL_10:
      EventInfoTipsArchiveListViewManager__RequestListObject(v4, v6, method);
      break;
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__SetObjectItem(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  float v4; // s0
  int32_t initMode; // w8
  int32_t v7; // w1
  System_Nullable_Vector3__o v8; // 0:x3.16

  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( obj )
    {
      v7 = 4;
      goto LABEL_9;
    }
LABEL_10:
    sub_B7076C(obj, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v7 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v7 = 3;
LABEL_9:
  *(_QWORD *)&v8.fields.value.fields.x = 0LL;
  *(_QWORD *)&v8.fields.value.fields.z = 0LL;
  EventInfoTipsArchiveListViewObject__Init(obj, v7, 0LL, v4, v8, v3);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v4; // x20
  float height; // s0
  float v6; // s9
  float v7; // s8
  Il2CppObject *current; // x19
  float v9; // s1
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4352E73 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_4352E73 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v4 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_B7076C(scrollView, method);
  }
  v6 = *((float *)&v4[12].fields + 1);
  v7 = height;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B7076C(v10, v11);
    v9 = vabds_f32(
           *((float *)&v12.fields.current[4].monitor + 1)
         + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                            (EventInfoTipsArchiveListViewObject_o *)v12.fields.current,
                            v11)
                 * -0.5),
           v6)
       - v7;
    *((float *)&current[7].monitor + 1) = UnityEngine_Mathf__Max(0.0, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v10; // x1
  bool IsNew; // w0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352E6C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_4352E6C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B7076C(v4, v5);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_B7076C(0LL, v5);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v13.fields.current[2].klass, v6);
    if ( !StateData )
      sub_B7076C(0LL, v10);
    IsNew = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp((EventInfoTipsArchiveListViewObject_o *)current, IsNew, v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__add_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4352E69 & 1) == 0 )
  {
    sub_B70694(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_4352E69 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B70A60(v8);
  EventInfoTipsArchiveListViewManager__remove_callbackFunc(v11, v12, v13);
}


UIScrollBar_o *__fastcall EventInfoTipsArchiveListViewManager__get_ScrollBar(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void __fastcall EventInfoTipsArchiveListViewManager__remove_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4352E6A & 1) == 0 )
  {
    sub_B70694(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_4352E6A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B70A60(v8);
  EventInfoTipsArchiveListViewManager__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc___ctor(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__BeginInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = id;
  v13 = result;
  if ( (byte_434F09E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo);
    byte_434F09E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&id);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EventInfoTipsArchiveListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventInfoTipsArchiveListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)id, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)id, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, v26, (unsigned int)id, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)id,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)id,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)id, v22);
    goto LABEL_38;
  }
}


void __fastcall EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor(
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___CreateList_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.scrollAction, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___CreateList_b__1(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.Id == this->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___GetDispLastId_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.Id == this->fields.id;
}
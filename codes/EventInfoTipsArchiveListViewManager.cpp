void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA1B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo, v6);
    byte_40FA1B6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__Awake(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  System_Collections_Generic_List_int__o *IdList; // x0
  System_Collections_Generic_List_int__o *v42; // x22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  unsigned __int64 v51; // x27
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *v52; // x24
  const MethodInfo *v53; // x2
  int32_t v54; // w1
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v57; // x26
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *figureArray; // x25
  UnityEngine_GameObject_o *v60; // x26
  EventInfoTipsArchiveListViewObject_o *Component_srcLineSprite; // x0
  EventInfoTipsArchiveListViewObject_o *v62; // x25
  int32_t Size; // w0
  int v64; // w8
  int v65; // w24
  float v66; // s10
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  UnityEngine_Object_o *scrollView; // x21
  UIScrollView_o *v71; // x0
  UnityEngine_Component_o *v72; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v74; // x1
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v81; // x23
  EventDelegate_Callback_o *v82; // x22
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  struct UIScrollBar_o *v87; // x8
  System_Collections_Generic_List_EventDelegate__o *v88; // x21
  EventDelegate_Callback_o *v89; // x22
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  struct UIScrollBar_o *v94; // x8
  System_Collections_Generic_List_EventDelegate__o *v95; // x19
  EventDelegate_Callback_o *v96; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA1AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, *(_QWORD *)&tabKind);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v9);
    sub_B16FFC(&EventDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v18);
    sub_B16FFC(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v19);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__, v20);
    sub_B16FFC(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo, v21);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__, v22);
    sub_B16FFC(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v23);
    sub_B16FFC(&Method_UIScrollView_OnScrollBar__, v24);
    byte_40FA1AD = 1;
  }
  v25 = sub_B170CC(
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo,
          *(_QWORD *)&tabKind,
          item,
          scrollAction,
          method);
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_44;
  *(_QWORD *)(v25 + 16) = scrollAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v25 + 16),
    (System_Int32_array **)scrollAction,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v32);
  this->fields.mainInfo = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_44;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(mainInfo, tabKind, v39);
  if ( IdList )
  {
    if ( this->fields.viewObjectInfoList )
    {
      v42 = IdList;
      zero = UnityEngine_Vector3__get_zero(0LL);
      x = zero.fields.x;
      y = zero.fields.y;
      z = zero.fields.z;
      DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v42, this->fields.mainInfo, v46);
      if ( v42->fields._size >= 1 )
      {
        v51 = 0LL;
        do
        {
          v52 = (EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *)sub_B170CC(
                                                                                 EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo,
                                                                                 v47,
                                                                                 v48,
                                                                                 v49,
                                                                                 v50);
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(v52, 0LL);
          if ( v51 >= (unsigned int)v42->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v52 )
            goto LABEL_44;
          v54 = v42->fields._items->m_Items[v51 + 1];
          v52->fields.id = v54;
          if ( !item )
            goto LABEL_44;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v54, v53);
          if ( StateData )
          {
            if ( StateData->fields.index >= 1 )
            {
              viewObjectInfoList = this->fields.viewObjectInfoList;
              v57 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                               System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo,
                                                                               v47,
                                                                               v48,
                                                                               v49,
                                                                               v50);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                v57,
                (Il2CppObject *)v52,
                Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
                (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
              USFGOPlayStandardCutInLimitCount_OverwriteCutIn = System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                  (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)viewObjectInfoList,
                                                                  (System_Predicate_T__o *)v57,
                                                                  (const MethodInfo_20441E8 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
              if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
              {
                figureArray = (UnityEngine_UI_Dropdown_DropdownItem_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields.figureArray;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v60 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                    figureArray,
                                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v60, 0LL, 0LL) )
                {
                  if ( !v60 )
                    goto LABEL_44;
                  Component_srcLineSprite = (EventInfoTipsArchiveListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      v60,
                                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                  if ( !Component_srcLineSprite )
                    goto LABEL_44;
                  v62 = Component_srcLineSprite;
                  EventInfoTipsArchiveListViewObject__SetItem(
                    Component_srcLineSprite,
                    v52->fields.id,
                    item,
                    v52->fields.id == DispLastId,
                    0LL);
                  Size = EventInfoTipsArchiveListViewObject__GetSize(v62, 0LL);
                  v64 = Size >= 0 ? Size : Size + 1;
                  v65 = v64 >> 1;
                  v66 = y - (float)(v64 >> 1);
                  GameObjectExtensions__SetParent_27425860(v60, this->fields.listParent, 0LL);
                  v99.fields.x = x;
                  v99.fields.y = v66;
                  v99.fields.z = z;
                  GameObjectExtensions__SetLocalPosition(v60, v99, 0LL);
                  GameObjectExtensions__ResetLocalRotation(v60, 0LL);
                  GameObjectExtensions__ResetLocalScale(v60, 0LL);
                  listParent = this->fields.listParent;
                  if ( !listParent )
                    goto LABEL_44;
                  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
                  UnityEngine_GameObject__set_layer(v60, layer, 0LL);
                  EventInfoTipsArchiveListViewObject__SetBaseTransform(v62, 0LL);
                  EventInfoTipsArchiveListViewObject__SetManager(v62, this, 0LL);
                  objectList = this->fields.objectList;
                  if ( !objectList )
                    goto LABEL_44;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
                  y = v66 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v62, 0LL) + v65);
                }
              }
            }
          }
        }
        while ( (__int64)++v51 < v42->fields._size );
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
    v71 = this->fields.scrollView;
    if ( !v71 )
      goto LABEL_44;
    UIScrollView__ResetPosition(v71, 0LL);
  }
  v72 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v72 )
    goto LABEL_44;
  transform = UnityEngine_Component__get_transform(v72, 0LL);
  if ( !transform )
    goto LABEL_44;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v74);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_44;
  onChange = scrollBar->fields.onChange;
  v81 = (Il2CppObject *)this->fields.scrollView;
  v82 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v75, v76, v77, v78);
  EventDelegate_Callback___ctor(v82, v81, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Add(onChange, v82, 0LL);
  v87 = this->fields.scrollBar;
  if ( !v87
    || (v88 = v87->fields.onChange,
        v89 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v83, v84, v85, v86),
        EventDelegate_Callback___ctor(
          v89,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        EventDelegate__Add(v88, v89, 0LL),
        (v94 = this->fields.scrollBar) == 0LL) )
  {
LABEL_44:
    sub_B170D4();
  }
  v95 = v94->fields.onChange;
  v96 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v90, v91, v92, v93);
  EventDelegate_Callback___ctor(
    v96,
    (Il2CppObject *)v25,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v95, v96, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *v10; // x0
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FA1B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA1B0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  v10 = this->fields.objectList;
  if ( !v10 )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v12 = this->fields.scrollView;
    if ( v12 )
    {
      UIScrollView__ResetPosition(v12, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewManager__GetDispLastId(
        EventInfoTipsArchiveListViewManager_o *this,
        System_Collections_Generic_List_int__o *idList,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t id; // w22
  unsigned __int64 v15; // x26
  EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *v16; // x23
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x25

  if ( (byte_40FA1AF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, idList);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_B16FFC(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v10);
    sub_B16FFC(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v11);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__, v12);
    sub_B16FFC(&EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo, v13);
    byte_40FA1AF = 1;
  }
  if ( !idList )
    goto LABEL_18;
  if ( idList->fields._size >= 1 )
  {
    id = 0;
    v15 = 0LL;
    while ( 1 )
    {
      v16 = (EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *)sub_B170CC(
                                                                             EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo,
                                                                             idList,
                                                                             item,
                                                                             method,
                                                                             v4);
      EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(v16, 0LL);
      if ( v15 >= (unsigned int)idList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v16 )
        break;
      v18 = idList->fields._items->m_Items[v15 + 1];
      v16->fields.id = v18;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v18, v17);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = this->fields.viewObjectInfoList;
          v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo,
                                                                           idList,
                                                                           item,
                                                                           method,
                                                                           v4);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v21,
            (Il2CppObject *)v16,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
          if ( System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)viewObjectInfoList,
                 (System_Predicate_T__o *)v21,
                 (const MethodInfo_20441E8 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            id = v16->fields.id;
          }
        }
      }
      if ( (__int64)++v15 >= idList->fields._size )
        return id;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  float v8; // s1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x20
  int size; // w22
  __int64 v11; // x24
  float v12; // s9
  __int64 v13; // x8
  EventInfoTipsArchiveListViewObject_o *v14; // x20
  int32_t v15; // w0
  UIPanel_o *scrollViewPanel; // x0
  UnityEngine_Vector2_o ViewSize; // kr00_8
  UIPanel_o *v18; // x0
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v20; // x2
  float height; // s0
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v24; // x20
  struct EventInfoTipsArchiveListViewItem_o *v25; // x8
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  if ( (byte_40FA1B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA1B4 = 1;
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
    transform = UnityEngine_Component__get_transform(scrollView, 0LL);
    if ( !transform )
      goto LABEL_32;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    objectList = this->fields.objectList;
    if ( !objectList )
      goto LABEL_32;
    size = objectList->fields._size;
    if ( size >= 1 )
    {
      v11 = 0LL;
      v12 = v8 - this->fields.initialScrollPosition.fields.y;
      do
      {
        if ( objectList->fields._size <= (unsigned int)v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v13 = (__int64)objectList->fields._items + 8 * v11;
        v14 = *(EventInfoTipsArchiveListViewObject_o **)(v13 + 32);
        if ( size - 1 == (_DWORD)v11 )
        {
          if ( !v14 )
            break;
          v15 = EventInfoTipsArchiveListViewObject__GetSize(*(EventInfoTipsArchiveListViewObject_o **)(v13 + 32), 0LL);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[24LL], 0LL).fields.y)) > (float)v15 )
          {
            scrollViewPanel = this->fields.scrollViewPanel;
            if ( !scrollViewPanel )
              break;
            ViewSize = UIPanel__GetViewSize(scrollViewPanel, 0LL);
            v12 = v12 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v14, 0LL));
          }
        }
        else if ( !v14 )
        {
          break;
        }
        v18 = this->fields.scrollViewPanel;
        if ( !v18 )
          break;
        ReadEndValue_k__BackingField = v14->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height(v18, 0LL);
        if ( ReadEndValue_k__BackingField <= v12 && v12 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          mainInfo = this->fields.mainInfo;
          if ( !mainInfo )
            break;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, v14->fields.id, v20);
          if ( StateData )
          {
            v24 = StateData;
            if ( EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL) )
            {
              EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v24, 0, 0LL);
              v25 = this->fields.mainInfo;
              if ( !v25 )
                break;
              tipsArchiveStateManager = v25->fields.tipsArchiveStateManager;
              if ( !tipsArchiveStateManager )
                break;
              tipsArchiveStateManager->fields.isModfiy = 1;
            }
          }
        }
        if ( (int)++v11 >= size )
          return;
        objectList = this->fields.objectList;
      }
      while ( objectList );
LABEL_32:
      sub_B170D4();
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
  int32_t Kind; // w2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B170D4();
      Kind = EventInfoTipsArchiveListViewObject__GetKind(obj, 0LL);
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
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0

  if ( (byte_40FA1B3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA1B3 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v21; // 0:x3.16

  if ( (byte_40FA1B2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FA1B2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      *(_QWORD *)&v21.fields.value.fields.x = 0LL;
      *(_QWORD *)&v21.fields.value.fields.z = 0LL;
      EventInfoTipsArchiveListViewObject__Init(
        (EventInfoTipsArchiveListViewObject_o *)current,
        mode,
        v19,
        0.0,
        v21,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_25389800(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_25389800(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8
  int32_t v6; // w1

  if ( (byte_40FA1B1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
      *(_QWORD *)&mode);
    byte_40FA1B1 = 1;
  }
  objectList = this->fields.objectList;
  this->fields.initMode = mode;
  if ( !objectList )
    sub_B170D4();
  this->fields.callbackCount = objectList->fields._size;
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
      EventInfoTipsArchiveListViewManager__RequestListObject(this, v6, method);
      break;
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__SetObjectItem(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t initMode; // w8
  int32_t v5; // w1
  System_Nullable_Vector3__o v6; // 0:x3.16

  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( obj )
    {
      v5 = 4;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v5 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v5 = 3;
LABEL_9:
  *(_QWORD *)&v6.fields.value.fields.x = 0LL;
  *(_QWORD *)&v6.fields.value.fields.z = 0LL;
  EventInfoTipsArchiveListViewObject__Init(obj, v5, 0LL, 0.0, v6, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  WebViewObject_o *v9; // x20
  float height; // s0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  float v12; // s9
  float v13; // s8
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA1B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    byte_40FA1B5 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    scrollView,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v9 = Component_WebViewObject,
        height = UIPanel__get_height((UIPanel_o *)Component_WebViewObject, 0LL),
        (objectList = this->fields.objectList) == 0LL) )
  {
    sub_B170D4();
  }
  v12 = *(float *)&v9[2].fields.mMarginRight;
  v13 = height;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B170D4();
    BottomPosition = EventInfoTipsArchiveListViewObject__get_BottomPosition(
                       (EventInfoTipsArchiveListViewObject_o *)v15.fields.current,
                       0LL);
    *((float *)&current[7].monitor + 1) = UnityEngine_Mathf__Max(
                                            0.0,
                                            vabds_f32(BottomPosition.fields.y, v12) - v13,
                                            0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  const MethodInfo *v7; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  bool IsNew; // w0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA1AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v5);
    byte_40FA1AE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B170D4();
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_B170D4();
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v12.fields.current[2].klass, v7);
    if ( !StateData )
      sub_B170D4();
    IsNew = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp((EventInfoTipsArchiveListViewObject_o *)current, IsNew, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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

  if ( (byte_40FA1AB & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA1AB = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B173C8(v8);
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

  if ( (byte_40FA1AC & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA1AC = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B173C8(v8);
  EventInfoTipsArchiveListViewManager__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc___ctor(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = id;
  v13 = result;
  if ( (byte_40F6FE5 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, v9);
    byte_40F6FE5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&id);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
    sub_B170D4();
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
    sub_B170D4();
  return n->fields.Id == this->fields.id;
}
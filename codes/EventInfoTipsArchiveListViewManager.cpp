void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9A97 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo, v5, v6, v7);
    byte_42E9A97 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  __int64 v57; // x20
  void *mainInfo; // x0
  __int64 v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  System_Collections_Generic_List_int__o *v75; // x22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v79; // x3
  unsigned __int64 v80; // x27
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *v81; // x24
  const MethodInfo *v82; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v85; // x26
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *figureArray; // x25
  UnityEngine_Object_o *v88; // x26
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t id; // w8
  EventInfoTipsArchiveListViewObject_o *v96; // x25
  bool v97; // w24
  const MethodInfo *v98; // x5
  float v99; // s0
  const MethodInfo *v100; // x1
  int32_t Size; // w0
  int v102; // w8
  int v103; // w24
  float v104; // s10
  int32_t layer; // w0
  const MethodInfo *v106; // x1
  const MethodInfo *v107; // x2
  const MethodInfo *v108; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v110; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v113; // x23
  EventDelegate_Callback_o *v114; // x22
  struct UIScrollBar_o *v115; // x8
  System_Collections_Generic_List_EventDelegate__o *v116; // x21
  EventDelegate_Callback_o *v117; // x22
  struct UIScrollBar_o *v118; // x8
  System_Collections_Generic_List_EventDelegate__o *v119; // x19
  EventDelegate_Callback_o *v120; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-64h]
  System_Nullable_Vector3__o v122; // 0:x3.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A8E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___,
      tabKind,
      (_DWORD)item,
      scrollAction);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__, v42, v43, v44);
    sub_B5D5C4(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__, v48, v49, v50);
    sub_B5D5C4(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_UIScrollView_OnScrollBar__, v54, v55, v56);
    byte_42E9A8E = 1;
  }
  v57 = sub_B5D694(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *)v57,
    0LL);
  if ( !v57 )
    goto LABEL_44;
  *(_QWORD *)(v57 + 16) = scrollAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v57 + 16),
    (System_Int32_array **)scrollAction,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v66);
  this->fields.mainInfo = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_44;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, v73);
  if ( IdList )
  {
    if ( this->fields.viewObjectInfoList )
    {
      v75 = IdList;
      zero = UnityEngine_Vector3__get_zero(0LL);
      x = zero.fields.x;
      y = zero.fields.y;
      z = zero.fields.z;
      DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v75, this->fields.mainInfo, v79);
      if ( v75->fields._size >= 1 )
      {
        v80 = 0LL;
        do
        {
          v81 = (EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *)sub_B5D694(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(v81, 0LL);
          if ( v80 >= (unsigned int)v75->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v81 )
            goto LABEL_44;
          v59 = (unsigned int)v75->fields._items->m_Items[v80 + 1];
          v81->fields.id = v59;
          if ( !item )
            goto LABEL_44;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v59, v82);
          if ( StateData )
          {
            if ( StateData->fields.index >= 1 )
            {
              viewObjectInfoList = this->fields.viewObjectInfoList;
              v85 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                v85,
                (Il2CppObject *)v81,
                Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
                (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
              USFGOPlayStandardCutInLimitCount_OverwriteCutIn = System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                  (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)viewObjectInfoList,
                                                                  (System_Predicate_T__o *)v85,
                                                                  (const MethodInfo_1FC03F4 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
              if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
              {
                figureArray = (UnityEngine_UI_Dropdown_DropdownItem_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields.figureArray;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v88 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                figureArray,
                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                mainInfo = (void *)UnityEngine_Object__op_Equality(v88, 0LL, 0LL);
                if ( ((unsigned __int8)mainInfo & 1) == 0 )
                {
                  if ( !v88 )
                    goto LABEL_44;
                  mainInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v88,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                  if ( !mainInfo )
                    goto LABEL_44;
                  id = v81->fields.id;
                  v96 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                  *((_DWORD *)mainInfo + 8) = id;
                  *((_QWORD *)mainInfo + 5) = item;
                  v97 = id == DispLastId;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)((char *)mainInfo + 40),
                    (System_Int32_array **)item,
                    v89,
                    v90,
                    v91,
                    v92,
                    v93,
                    v94);
                  *(_QWORD *)&v122.fields.value.fields.x = 0LL;
                  *(_QWORD *)&v122.fields.value.fields.z = 0LL;
                  v96->fields.isLast = v97;
                  EventInfoTipsArchiveListViewObject__Init(v96, 2, 0LL, v99, v122, v98);
                  Size = EventInfoTipsArchiveListViewObject__GetSize(v96, v100);
                  v102 = Size >= 0 ? Size : Size + 1;
                  v103 = v102 >> 1;
                  v104 = y - (float)(v102 >> 1);
                  GameObjectExtensions__SetParent_32436388(
                    (UnityEngine_GameObject_o *)v88,
                    this->fields.listParent,
                    0LL);
                  v124.fields.x = x;
                  v124.fields.y = v104;
                  v124.fields.z = z;
                  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v88, v124, 0LL);
                  GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v88, 0LL);
                  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v88, 0LL);
                  mainInfo = this->fields.listParent;
                  if ( !mainInfo )
                    goto LABEL_44;
                  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v88, layer, 0LL);
                  EventInfoTipsArchiveListViewObject__SetBaseTransform(v96, v106);
                  EventInfoTipsArchiveListViewObject__SetManager(v96, this, v107);
                  mainInfo = this->fields.objectList;
                  if ( !mainInfo )
                    goto LABEL_44;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainInfo,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
                  y = v104 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v96, v108) + v103);
                }
              }
            }
          }
        }
        while ( (__int64)++v80 < v75->fields._size );
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
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v110);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_44;
  onChange = scrollBar->fields.onChange;
  v113 = (Il2CppObject *)this->fields.scrollView;
  v114 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v114, v113, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  mainInfo = EventDelegate__Add(onChange, v114, 0LL);
  v115 = this->fields.scrollBar;
  if ( !v115
    || (v116 = v115->fields.onChange,
        v117 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v117,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v116, v117, 0LL),
        (v118 = this->fields.scrollBar) == 0LL) )
  {
LABEL_44:
    sub_B5D69C(mainInfo, v59);
  }
  v119 = v118->fields.onChange;
  v120 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v120,
    (Il2CppObject *)v57,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v119, v120, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9A91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E9A91 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v25.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v25.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
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
    sub_B5D69C(objectList, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int32_t id; // w22
  unsigned __int64 v26; // x26
  EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *v27; // x23
  const MethodInfo *v28; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *viewObjectInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x25

  v5 = idList;
  v6 = this;
  if ( (byte_42E9A90 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___,
      (_DWORD)idList,
      (_DWORD)item,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__, v19, v20, v21);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B5D5C4(
                                                      &EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo,
                                                      v22,
                                                      v23,
                                                      v24);
    byte_42E9A90 = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size >= 1 )
  {
    id = 0;
    v26 = 0LL;
    while ( 1 )
    {
      v27 = (EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *)sub_B5D694(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(v27, 0LL);
      if ( v26 >= (unsigned int)v5->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v27 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)v5->fields._items->m_Items[v26 + 1];
      v27->fields.id = (int)idList;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)idList, v28);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)v6->fields.viewObjectInfoList;
          v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v31,
            (Il2CppObject *)v27,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
          if ( System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v31,
                 (const MethodInfo_1FC03F4 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            id = v27->fields.id;
          }
        }
      }
      if ( (__int64)++v26 >= v5->fields._size )
        return id;
    }
LABEL_18:
    sub_B5D69C(this, idList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
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
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v12; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v14; // s1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x20
  int size; // w22
  __int64 v17; // x24
  float v18; // s9
  __int64 v19; // x8
  EventInfoTipsArchiveListViewObject_o *v20; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v22; // x1
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v24; // x2
  float height; // s0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v26; // x20
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  if ( (byte_42E9A95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9A95 = 1;
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
    *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)scrollView,
                                             0LL);
    objectList = this->fields.objectList;
    if ( !objectList )
      goto LABEL_32;
    size = objectList->fields._size;
    if ( size >= 1 )
    {
      v17 = 0LL;
      v18 = v14 - this->fields.initialScrollPosition.fields.y;
      do
      {
        if ( objectList->fields._size <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v19 = (__int64)objectList->fields._items + 8 * v17;
        v20 = *(EventInfoTipsArchiveListViewObject_o **)(v19 + 32);
        if ( size - 1 == (_DWORD)v17 )
        {
          if ( !v20 )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewObject__GetSize(
                                                    *(EventInfoTipsArchiveListViewObject_o **)(v19 + 32),
                                                    v12);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[24LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
            if ( !scrollView )
              break;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v18 = v18 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v20, v22));
          }
        }
        else if ( !v20 )
        {
          break;
        }
        scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
        if ( !scrollView )
          break;
        ReadEndValue_k__BackingField = v20->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v18 && v18 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = (UnityEngine_Component_o *)this->fields.mainInfo;
          if ( !scrollView )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem__GetStateData(
                                                    (EventInfoTipsArchiveListViewItem_o *)scrollView,
                                                    v20->fields.id,
                                                    v24);
          if ( scrollView )
          {
            v26 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView;
            scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                      (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView,
                                                      0LL);
            if ( ((unsigned __int8)scrollView & 1) != 0 )
            {
              EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v26, 0, 0LL);
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
        if ( (int)++v17 >= size )
          return;
        objectList = this->fields.objectList;
      }
      while ( objectList );
LABEL_32:
      sub_B5D69C(scrollView, v12);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B5D69C(v12, v13);
      Kind = EventInfoTipsArchiveListViewObject__GetKind(obj, v13);
      EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(v9, 0, Kind, 0LL);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnMoveEnd(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_42E9A94 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A94 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( v7 <= 0 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x5
  float v34; // s0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v36; // 0:x3.16

  if ( (byte_42E9A93 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E9A93 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v31, v32);
      *(_QWORD *)&v36.fields.value.fields.x = 0LL;
      *(_QWORD *)&v36.fields.value.fields.z = 0LL;
      EventInfoTipsArchiveListViewObject__Init(
        (EventInfoTipsArchiveListViewObject_o *)current,
        mode,
        v30,
        v34,
        v36,
        v33);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_27085792(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_27085792(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoTipsArchiveListViewManager_o *v5; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8
  int32_t v7; // w1

  v5 = this;
  if ( (byte_42E9A92 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B5D5C4(
                                                      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
                                                      mode,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E9A92 = 1;
  }
  objectList = v5->fields.objectList;
  v5->fields.initMode = mode;
  if ( !objectList )
    sub_B5D69C(this, *(_QWORD *)&mode);
  v5->fields.callbackCount = objectList->fields._size;
  switch ( mode )
  {
    case 3:
      v7 = 4;
      goto LABEL_10;
    case 2:
      v7 = 2;
      goto LABEL_10;
    case 1:
      v7 = 3;
LABEL_10:
      EventInfoTipsArchiveListViewManager__RequestListObject(v5, v7, method);
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
    sub_B5D69C(obj, obj);
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
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v18; // x20
  float height; // s0
  float v20; // s9
  float v21; // s8
  Il2CppObject *current; // x19
  float v23; // s1
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E9A96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E9A96 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v18 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_B5D69C(scrollView, method);
  }
  v20 = *((float *)&v18[12].fields + 1);
  v21 = height;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v24 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B5D69C(v24, v25);
    v23 = vabds_f32(
            *((float *)&v26.fields.current[4].monitor + 1)
          + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                             (EventInfoTipsArchiveListViewObject_o *)v26.fields.current,
                             v25)
                  * -0.5),
            v20)
        - v21;
    *((float *)&current[7].monitor + 1) = UnityEngine_Mathf__Max(0.0, v23, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
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
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v21; // x1
  bool IsNew; // w0
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9A8F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9A8F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v15 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B5D69C(v15, v16);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_B5D69C(0LL, v16);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v24.fields.current[2].klass, v17);
    if ( !StateData )
      sub_B5D69C(0LL, v21);
    IsNew = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp((EventInfoTipsArchiveListViewObject_o *)current, IsNew, v23);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__add_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewManager_o *v12; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9A8C & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9A8C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v9->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventInfoTipsArchiveListViewManager_o *)sub_B5D990(v9);
  EventInfoTipsArchiveListViewManager__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E9A8D & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9A8D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v9->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventInfoTipsArchiveListViewManager_o *)sub_B5D990(v9);
  EventInfoTipsArchiveListViewManager__Awake(v12, v13);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__BeginInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = id;
  v15 = result;
  if ( (byte_42E6552 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, id, callback);
    sub_B5D5C4(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E6552 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&id);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)id, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)id, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)id, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)id,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)id,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)id, v23);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return n->fields.Id == this->fields.id;
}
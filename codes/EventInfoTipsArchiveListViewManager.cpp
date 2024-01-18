void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188CEB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo, v3);
    byte_4188CEB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  void *mainInfo; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_int__o *IdList; // x0
  System_Collections_Generic_List_int__o *v42; // x22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v46; // x3
  unsigned __int64 v47; // x27
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *v48; // x24
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v51; // x26
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *figureArray; // x25
  UnityEngine_Object_o *v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t id; // w8
  EventInfoTipsArchiveListViewObject_o *v62; // x25
  bool v63; // w24
  const MethodInfo *v64; // x5
  float v65; // s0
  const MethodInfo *v66; // x1
  int32_t Size; // w0
  int v68; // w8
  int v69; // w24
  float v70; // s10
  int32_t layer; // w0
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v76; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v79; // x23
  EventDelegate_Callback_o *v80; // x22
  struct UIScrollBar_o *v81; // x8
  System_Collections_Generic_List_EventDelegate__o *v82; // x21
  EventDelegate_Callback_o *v83; // x22
  struct UIScrollBar_o *v84; // x8
  System_Collections_Generic_List_EventDelegate__o *v85; // x19
  EventDelegate_Callback_o *v86; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-64h]
  System_Nullable_Vector3__o v88; // 0:x3.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188CE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, *(_QWORD *)&tabKind);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v9);
    sub_B2C35C(&EventDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v18);
    sub_B2C35C(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v19);
    sub_B2C35C(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__, v20);
    sub_B2C35C(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo, v21);
    sub_B2C35C(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__, v22);
    sub_B2C35C(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v23);
    sub_B2C35C(&Method_UIScrollView_OnScrollBar__, v24);
    byte_4188CE2 = 1;
  }
  v25 = sub_B2C42C(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_44;
  *(_QWORD *)(v25 + 16) = scrollAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v25 + 16),
    (System_Int32_array **)scrollAction,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v34);
  this->fields.mainInfo = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_44;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, 0LL);
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
        v47 = 0LL;
        do
        {
          v48 = (EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *)sub_B2C42C(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(v48, 0LL);
          if ( v47 >= (unsigned int)v42->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v48 )
            goto LABEL_44;
          v27 = (unsigned int)v42->fields._items->m_Items[v47 + 1];
          v48->fields.id = v27;
          if ( !item )
            goto LABEL_44;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v27, 0LL);
          if ( StateData )
          {
            if ( StateData->fields.index >= 1 )
            {
              viewObjectInfoList = this->fields.viewObjectInfoList;
              v51 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                v51,
                (Il2CppObject *)v48,
                Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
                (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
              USFGOPlayStandardCutInLimitCount_OverwriteCutIn = System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                  (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)viewObjectInfoList,
                                                                  (System_Predicate_T__o *)v51,
                                                                  (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
              if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
              {
                figureArray = (UnityEngine_UI_Dropdown_DropdownItem_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields.figureArray;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v54 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                figureArray,
                                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                mainInfo = (void *)UnityEngine_Object__op_Equality(v54, 0LL, 0LL);
                if ( ((unsigned __int8)mainInfo & 1) == 0 )
                {
                  if ( !v54 )
                    goto LABEL_44;
                  mainInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v54,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                  if ( !mainInfo )
                    goto LABEL_44;
                  id = v48->fields.id;
                  v62 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                  *((_DWORD *)mainInfo + 8) = id;
                  *((_QWORD *)mainInfo + 5) = item;
                  v63 = id == DispLastId;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)((char *)mainInfo + 40),
                    (System_Int32_array **)item,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60);
                  *(_QWORD *)&v88.fields.value.fields.x = 0LL;
                  *(_QWORD *)&v88.fields.value.fields.z = 0LL;
                  v62->fields.isLast = v63;
                  EventInfoTipsArchiveListViewObject__Init(v62, 2, 0LL, v65, v88, v64);
                  Size = EventInfoTipsArchiveListViewObject__GetSize(v62, v66);
                  v68 = Size >= 0 ? Size : Size + 1;
                  v69 = v68 >> 1;
                  v70 = y - (float)(v68 >> 1);
                  GameObjectExtensions__SetParent_31331816(
                    (UnityEngine_GameObject_o *)v54,
                    this->fields.listParent,
                    0LL);
                  v90.fields.x = x;
                  v90.fields.y = v70;
                  v90.fields.z = z;
                  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v54, v90, 0LL);
                  GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v54, 0LL);
                  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v54, 0LL);
                  mainInfo = this->fields.listParent;
                  if ( !mainInfo )
                    goto LABEL_44;
                  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v54, layer, 0LL);
                  EventInfoTipsArchiveListViewObject__SetBaseTransform(v62, v72);
                  EventInfoTipsArchiveListViewObject__SetManager(v62, this, v73);
                  mainInfo = this->fields.objectList;
                  if ( !mainInfo )
                    goto LABEL_44;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainInfo,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
                  y = v70 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v62, v74) + v69);
                }
              }
            }
          }
        }
        while ( (__int64)++v47 < v42->fields._size );
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
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v76);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_44;
  onChange = scrollBar->fields.onChange;
  v79 = (Il2CppObject *)this->fields.scrollView;
  v80 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v80, v79, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  mainInfo = EventDelegate__Add(onChange, v80, 0LL);
  v81 = this->fields.scrollBar;
  if ( !v81
    || (v82 = v81->fields.onChange,
        v83 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v83,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v82, v83, 0LL),
        (v84 = this->fields.scrollBar) == 0LL) )
  {
LABEL_44:
    sub_B2C434(mainInfo, v27);
  }
  v85 = v84->fields.onChange;
  v86 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v86,
    (Il2CppObject *)v25,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v85, v86, 0LL);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4188CE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4188CE5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v13.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
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
    sub_B2C434(objectList, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t id; // w22
  unsigned __int64 v14; // x26
  EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *v15; // x23
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *viewObjectInfoList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x25

  v5 = idList;
  v6 = this;
  if ( (byte_4188CE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, idList);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B2C35C(&Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__, v9);
    sub_B2C35C(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v10);
    sub_B2C35C(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__, v11);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B2C35C(
                                                      &EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo,
                                                      v12);
    byte_4188CE4 = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size >= 1 )
  {
    id = 0;
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *)sub_B2C42C(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(v15, 0LL);
      if ( v14 >= (unsigned int)v5->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v15 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)v5->fields._items->m_Items[v14 + 1];
      v15->fields.id = (int)idList;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)idList, 0LL);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)v6->fields.viewObjectInfoList;
          v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v18,
            (Il2CppObject *)v15,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor__);
          if ( System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v18,
                 (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            id = v15->fields.id;
          }
        }
      }
      if ( (__int64)++v14 >= v5->fields._size )
        return id;
    }
LABEL_18:
    sub_B2C434(this, idList);
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
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v8; // s1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x20
  int size; // w22
  __int64 v11; // x24
  float v12; // s9
  __int64 v13; // x8
  EventInfoTipsArchiveListViewObject_o *v14; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v16; // x1
  float ReadEndValue_k__BackingField; // s8
  float height; // s0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v19; // x20

  if ( (byte_4188CE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4188CE9 = 1;
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
    if ( !scrollView
      || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)scrollView,
                                                  0LL),
          (objectList = this->fields.objectList) == 0LL) )
    {
LABEL_31:
      sub_B2C434(scrollView, v6);
    }
    size = objectList->fields._size;
    if ( size >= 1 )
    {
      v11 = 0LL;
      v12 = v8 - this->fields.initialScrollPosition.fields.y;
      while ( 1 )
      {
        if ( objectList->fields._size <= (unsigned int)v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v13 = (__int64)objectList->fields._items + 8 * v11;
        v14 = *(EventInfoTipsArchiveListViewObject_o **)(v13 + 32);
        if ( size - 1 == (_DWORD)v11 )
        {
          if ( !v14 )
            goto LABEL_31;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewObject__GetSize(
                                                    *(EventInfoTipsArchiveListViewObject_o **)(v13 + 32),
                                                    v6);
          if ( !this->fields.scrollViewPanel )
            goto LABEL_31;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[24LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
            if ( !scrollView )
              goto LABEL_31;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v12 = v12 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v14, v16));
          }
        }
        else if ( !v14 )
        {
          goto LABEL_31;
        }
        scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
        if ( !scrollView )
          goto LABEL_31;
        ReadEndValue_k__BackingField = v14->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v12 && v12 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = (UnityEngine_Component_o *)this->fields.mainInfo;
          if ( !scrollView )
            goto LABEL_31;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem__GetStateData(
                                                    (EventInfoTipsArchiveListViewItem_o *)scrollView,
                                                    v14->fields.id,
                                                    0LL);
          if ( scrollView )
          {
            v19 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView;
            scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                      (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)scrollView,
                                                      0LL);
            if ( ((unsigned __int8)scrollView & 1) != 0 )
            {
              EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v19, 0, 0LL);
              scrollView = (UnityEngine_Component_o *)this->fields.mainInfo;
              if ( !scrollView )
                goto LABEL_31;
              EventInfoTipsArchiveListViewItem__set_IsModfiy((EventInfoTipsArchiveListViewItem_o *)scrollView, 1, 0LL);
            }
          }
        }
        if ( (int)++v11 >= size )
          break;
        objectList = this->fields.objectList;
        if ( !objectList )
          goto LABEL_31;
      }
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B2C434(v12, v13);
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

  if ( (byte_4188CE8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188CE8 = 1;
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
          sub_B2C434(v8, v7);
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
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  float v19; // s0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v21; // 0:x3.16

  if ( (byte_4188CE7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4188CE7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v16, v17);
      *(_QWORD *)&v21.fields.value.fields.x = 0LL;
      *(_QWORD *)&v21.fields.value.fields.z = 0LL;
      EventInfoTipsArchiveListViewObject__Init(
        (EventInfoTipsArchiveListViewObject_o *)current,
        mode,
        v15,
        v19,
        v21,
        v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_27129016(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_27129016(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4188CE6 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_B2C35C(
                                                      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
                                                      *(_QWORD *)&mode);
    byte_4188CE6 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B2C434(this, *(_QWORD *)&mode);
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
    sub_B2C434(obj, obj);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v8; // x20
  float height; // s0
  float v10; // s9
  float v11; // s8
  Il2CppObject *current; // x19
  float v13; // s1
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4188CEA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    byte_4188CEA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v8 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_B2C434(scrollView, method);
  }
  v10 = *((float *)&v8[12].fields + 1);
  v11 = height;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v14 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B2C434(v14, v15);
    v13 = vabds_f32(
            *((float *)&v16.fields.current[4].monitor + 1)
          + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                             (EventInfoTipsArchiveListViewObject_o *)v16.fields.current,
                             v15)
                  * -0.5),
            v10)
        - v11;
    *((float *)&current[7].monitor + 1) = UnityEngine_Mathf__Max(0.0, v13, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v12; // x1
  bool IsNew; // w0
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188CE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v5);
    byte_4188CE3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B2C434(v7, v8);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_B2C434(0LL, v8);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v15.fields.current[2].klass, 0LL);
    if ( !StateData )
      sub_B2C434(0LL, v12);
    IsNew = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp((EventInfoTipsArchiveListViewObject_o *)current, IsNew, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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

  if ( (byte_4188CE0 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_4188CE0 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B2C728(v8);
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

  if ( (byte_4188CE1 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_4188CE1 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventInfoTipsArchiveListViewManager_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184B18 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, v9);
    byte_4184B18 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&id, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return n->fields.Id == this->fields.id;
}
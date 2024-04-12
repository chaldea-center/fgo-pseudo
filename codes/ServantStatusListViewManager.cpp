void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Array_o *v9; // x19
  struct ServantStatusListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  struct ServantStatusListViewManager_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  struct ServantStatusListViewManager_StaticFields *v34; // x0
  __int64 v35; // x0
  System_RuntimeFieldHandle_o v36; // 0:w1.4
  System_RuntimeFieldHandle_o v37; // 0:w1.4

  if ( (byte_42B4289 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDraw_Kind___TypeInfo);
    sub_B52984(&ServantStatusListViewManager_TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE);
    sub_B52984(&Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6);
    byte_42B4289 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v1 = (System_Array_o *)sub_B5299C(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v36.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v1, v36, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v1;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->normalKindList,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = (System_Array_o *)sub_B5299C(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v37.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v9, v37, 0LL);
  v10 = ServantStatusListViewManager_TypeInfo->static_fields;
  v10->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->equipKindList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = sub_B5299C(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_8;
  v25 = (System_Int32_array **)v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v17 + 32) = 12;
  v26 = ServantStatusListViewManager_TypeInfo->static_fields;
  v26->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v26->npcFollowerEquipKindList, v25, v19, v20, v21, v22, v23, v24);
  v17 = sub_B5299C(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v17 )
LABEL_8:
    sub_B52A5C(v17, v18);
  v33 = (System_Int32_array **)v17;
  if ( !*(_DWORD *)(v17 + 24) )
  {
LABEL_9:
    v35 = sub_B52A88(v17);
    sub_B52A28(v35, 0LL);
  }
  *(_DWORD *)(v17 + 32) = 14;
  v34 = ServantStatusListViewManager_TypeInfo->static_fields;
  v34->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v34->commandCodeKindList, v33, v27, v28, v29, v30, v31, v32);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B4288 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
    byte_42B4288 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.isInput = 1;
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentKindList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *currentKindList; // x0
  UnityEngine_Object_c **v7; // x25
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  WebViewObject_o *Component_WebViewObject; // x20
  float v16; // s8
  float v17; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v19; // x8
  __int64 *v20; // x8
  struct ServantEntity_o *svtEntity; // x8
  __int64 v22; // x26
  __int64 v23; // x8
  unsigned __int64 v24; // x27
  signed __int64 v25; // x28
  float v26; // s8
  int32_t v27; // w21
  il2cpp_array_size_t v28; // w22
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v30; // x8
  struct ServantStatusListViewItem_o *v31; // x8
  __int64 v32; // x23
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v35; // x8
  UnityEngine_Object_c *v36; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v37; // x22
  UnityEngine_Object_o *v38; // x22
  ServantStatusListViewObject_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *Component_ServantStatusListViewItemDrawButton; // x24
  const MethodInfo *v41; // x2
  UnityEngine_Object_c **v42; // x20
  const MethodInfo *v43; // x1
  int32_t Size; // w0
  int v45; // w25
  UnityEngine_Transform_o *v46; // x24
  int v47; // w25
  float v48; // s8
  UnityEngine_Transform_o *transform; // x24
  int v50; // s0
  UnityEngine_Transform_o *v54; // x24
  int v55; // s0
  int32_t layer; // w0
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x2
  UnityEngine_Object_c *v61; // x0
  UnityEngine_Object_o *v62; // x20
  __int64 v63; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B427D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B52984(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_5368/*"DispObject"*/);
    byte_42B427D = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_126;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    currentKindList,
    (const MethodInfo_305A394 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
  v7 = &UnityEngine_Object_TypeInfo;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
    if ( !currentKindList )
      goto LABEL_126;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)currentKindList,
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(
                                                                                                   (UnityEngine_Object_o *)Component_WebViewObject,
                                                                                                   0LL,
                                                                                                   0LL);
    if ( ((unsigned __int8)currentKindList & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_126;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
      if ( !currentKindList )
        goto LABEL_126;
      v16 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v17 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Component__get_transform(
                                                                                                     (UnityEngine_Component_o *)currentKindList,
                                                                                                     0LL);
      if ( !currentKindList )
        goto LABEL_126;
      v65.fields.x = -v16;
      v65.fields.y = -v17;
      v65.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v65, 0LL);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
      if ( !currentKindList )
        goto LABEL_126;
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = this->fields.mainInfo;
  if ( !v19 )
    goto LABEL_126;
  if ( v19->fields.commandCodeEntity )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    }
    v20 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 32LL);
  }
  else
  {
    svtEntity = v19->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_126;
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)SvtType__IsServantEquip(
                                                                                                   svtEntity->fields.type,
                                                                                                   0LL);
    if ( ((unsigned __int8)currentKindList & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_126;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
      if ( (*p_mainInfo)->fields.isNpcFollowerServantEquip )
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
        }
        v20 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 24LL);
      }
      else
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
        }
        v20 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 16LL);
      }
    }
    else
    {
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
      if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
      }
      v20 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 8LL);
    }
  }
  v22 = *v20;
  if ( *v20 )
  {
    if ( this->fields.statusObjectList )
    {
      v23 = *(_QWORD *)(v22 + 24);
      if ( (int)v23 >= 1 )
      {
        v24 = 0LL;
        v25 = (int)v23;
        v26 = 0.0;
        do
        {
          if ( v24 >= *(unsigned int *)(v22 + 24) )
          {
LABEL_127:
            v63 = sub_B52A88(currentKindList);
            sub_B52A28(v63, 0LL);
          }
          v27 = *(_DWORD *)(v22 + 4 * v24 + 32);
          v28 = v27 - 1;
          if ( v27 >= 1 )
          {
            statusObjectList = this->fields.statusObjectList;
            if ( !statusObjectList )
              goto LABEL_126;
            if ( v27 <= (signed int)statusObjectList->max_length )
            {
              switch ( v27 )
              {
                case 3:
                  v30 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !v30->fields.isEquipShowMode )
                    goto LABEL_118;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)v30->fields.svtEntity;
                  if ( !currentKindList )
                    goto LABEL_126;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantEntity__get_IsServant((ServantEntity_o *)currentKindList, 0LL);
                  if ( ((unsigned __int8)currentKindList & 1) == 0 )
                    goto LABEL_118;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !(*p_mainInfo)->fields.isCollection )
                    goto LABEL_89;
                  goto LABEL_118;
                case 4:
                case 12:
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)*p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)currentKindList, 0LL);
                  if ( ((unsigned __int8)currentKindList & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 5:
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)*p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewItem__IsEnablePassiveSkillInfo((ServantStatusListViewItem_o *)currentKindList, 0LL);
                  if ( ((unsigned __int8)currentKindList & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 6:
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)*p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewItem__IsEnableAppendSkillInfo((ServantStatusListViewItem_o *)currentKindList, 0LL);
                  if ( ((unsigned __int8)currentKindList & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 7:
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)*p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)currentKindList, &tdInfo, 0LL);
                  if ( !tdInfo )
                    goto LABEL_126;
                  if ( tdInfo->fields.id <= 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 10:
                  v31 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  v32 = 0LL;
                  break;
                case 15:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                    goto LABEL_118;
                  goto LABEL_89;
                case 16:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !(*p_mainInfo)->fields.enableTdSpeed )
                    goto LABEL_118;
                  goto LABEL_89;
                case 17:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( (*p_mainInfo)->fields.enableChangeVoice )
                    goto LABEL_89;
                  goto LABEL_118;
                case 18:
                case 19:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                    goto LABEL_118;
                  goto LABEL_89;
                default:
                  goto LABEL_89;
              }
              while ( 1 )
              {
                svtCommentEntityList = v31->fields.svtCommentEntityList;
                if ( !svtCommentEntityList )
                  goto LABEL_126;
                max_length = svtCommentEntityList->max_length;
                if ( (int)v32 >= max_length )
                  goto LABEL_118;
                if ( (unsigned int)v32 >= max_length )
                  goto LABEL_127;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)svtCommentEntityList->m_Items[v32];
                if ( !currentKindList )
                  goto LABEL_126;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantCommentEntity__IsConst((ServantCommentEntity_o *)currentKindList, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) == 0 )
                  break;
                v31 = *p_mainInfo;
                ++v32;
                if ( !*p_mainInfo )
                  goto LABEL_126;
              }
LABEL_89:
              v35 = this->fields.statusObjectList;
              if ( !v35 )
                goto LABEL_126;
              if ( v28 >= v35->max_length )
                goto LABEL_127;
              v36 = *v7;
              v37 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v35->m_Items[v28];
              if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v36);
              v38 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              v37,
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
              if ( ((unsigned __int8)currentKindList & 1) != 0 )
              {
                if ( !v38 )
                  goto LABEL_126;
                Component_srcLineSprite = (ServantStatusListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v38,
                                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
                Component_ServantStatusListViewItemDrawButton = (UnityEngine_Object_o *)GameObjectExtensions__FindComponent_ServantStatusListViewItemDrawButton_(
                                                                                          (UnityEngine_GameObject_o *)v38,
                                                                                          (System_String_o *)StringLiteral_5368/*"DispObject"*/,
                                                                                          (const MethodInfo_1B7BA20 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
                if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v7)->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(*v7);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(Component_ServantStatusListViewItemDrawButton, 0LL, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) != 0 )
                {
                  if ( !Component_ServantStatusListViewItemDrawButton )
                    goto LABEL_126;
                  Component_ServantStatusListViewItemDrawButton[4].fields.m_CachedPtr = v27;
                }
                if ( !Component_srcLineSprite )
                  goto LABEL_126;
                v42 = v7;
                ServantStatusListViewObject__SetItem(Component_srcLineSprite, this->fields.mainInfo, v41);
                Size = ServantStatusListViewObject__GetSize(Component_srcLineSprite, v43);
                v45 = Size >= 0 ? Size : Size + 1;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38, 0LL);
                if ( !this->fields.listParent )
                  goto LABEL_126;
                v46 = (UnityEngine_Transform_o *)currentKindList;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
                if ( !v46 )
                  goto LABEL_126;
                UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)currentKindList, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38, 0LL);
                if ( !currentKindList )
                  goto LABEL_126;
                v47 = v45 >> 1;
                v48 = v26 - (float)v47;
                v66.fields.x = 0.0;
                v66.fields.z = 0.0;
                v66.fields.y = v48;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v66, 0LL);
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38, 0LL);
                *(UnityEngine_Quaternion_o *)&v50 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !transform )
                  goto LABEL_126;
                UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v50, 0LL);
                v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38, 0LL);
                *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
                if ( !v54 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.listParent;
                if ( !currentKindList )
                  goto LABEL_126;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)currentKindList, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v38, layer, 0LL);
                ServantStatusListViewObject__SetBaseTransform(Component_srcLineSprite, v59);
                ServantStatusListViewObject__SetManager(Component_srcLineSprite, this, v60);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.objectList;
                if ( !currentKindList )
                  goto LABEL_126;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentKindList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
                if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
                }
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
                if ( !currentKindList )
                  goto LABEL_126;
                v26 = v48 - (float)(ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK + v47);
                System_Collections_Generic_List_VoiceCondType_Type___Add(
                  (System_Collections_Generic_List_VoiceCondType_Type__o *)currentKindList,
                  v27,
                  (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
                v7 = v42;
                p_mainInfo = &this->fields.mainInfo;
              }
            }
          }
LABEL_118:
          ++v24;
        }
        while ( (__int64)v24 < v25 );
      }
    }
  }
  v61 = *v7;
  v62 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v61);
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
    if ( currentKindList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
      return;
    }
LABEL_126:
    sub_B52A5C(currentKindList, v5);
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B427E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B427E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B52A5C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ServantStatusListViewManager__GetScrillBarValue(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x20
  float v5; // s9
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t size; // w9
  bool v8; // vf
  int v9; // w9
  __int64 v10; // x8
  ServantStatusListViewObject_o *v11; // x19
  float v12; // s1
  float v13; // s8
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v14; // x20
  const MethodInfo *v15; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42B427F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    this = (ServantStatusListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_42B427F = 1;
  }
  v5 = 1.0;
  if ( v4->fields.currentKindList )
  {
    objectList = v4->fields.objectList;
    if ( objectList )
    {
      size = objectList->fields._size;
      v8 = __OFSUB__(size, 1);
      v9 = size - 1;
      if ( v9 < 0 == v8 )
      {
        v10 = (__int64)objectList->fields._items + 8 * v9;
        v11 = *(ServantStatusListViewObject_o **)(v10 + 32);
        if ( !v11 )
          goto LABEL_17;
        this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                   *(UnityEngine_Component_o **)(v10 + 32),
                                                   0LL);
        if ( !this )
          goto LABEL_17;
        *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        this = (ServantStatusListViewManager_o *)v4->fields.currentKindList;
        if ( !this )
          goto LABEL_17;
        v13 = v12;
        this = (ServantStatusListViewManager_o *)System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
                                                   (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this,
                                                   kind,
                                                   (const MethodInfo_305B000 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( (_DWORD)this != -1 )
        {
          v14 = v4->fields.objectList;
          if ( v14 )
          {
            if ( v14->fields._size <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            this = (ServantStatusListViewManager_o *)v14->fields._items->m_Items[(int)this];
            if ( this )
            {
              this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
              if ( this )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
                return (float)(localPosition.fields.y
                             + (float)((float)ServantStatusListViewObject__GetSize(v11, v15) / 3.2))
                     / v13;
              }
            }
          }
LABEL_17:
          sub_B52A5C(this, *(_QWORD *)&kind);
        }
      }
    }
  }
  return v5;
}


void __fastcall ServantStatusListViewManager__OnClickButton(
        ServantStatusListViewManager_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t ButtonIndex; // w21
  int v16; // w0
  int32_t v17; // w1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)ownerObject, (System_String_array **)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_B52A5C(v13, v14);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0LL);
      v16 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))ownerObject->klass->vtable._4_GetKind.method)(
              ownerObject,
              ownerObject->klass->vtable._5_SetItem.methodPtr);
      if ( v16 == 17 )
      {
        v17 = 9;
        goto LABEL_9;
      }
      if ( v16 == 16 )
      {
        v17 = 8;
LABEL_9:
        ServantStatusListViewManager_CallbackFunc__Invoke(v9, v17, ButtonIndex, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__OnClickCombine(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusListViewManager_o *v9; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  CommonUI_o *Instance; // x19
  System_String_o *v17; // x20
  ServantStatusListViewManager___c_c *v18; // x8
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__53_0; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct ServantStatusListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v9 = this;
  if ( (byte_42B4287 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantStatusListViewManager_OnClickCombine__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__);
    sub_B52984(&ServantStatusListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_12082/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4287 = 1;
  }
  if ( v9->fields.initMode == 1 )
  {
    mainInfo = v9->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v9->fields.callbackFunc;
        v9->fields.callbackFunc = 0LL;
        sub_B52920(
          (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
          0LL,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        if ( callbackFunc )
        {
          v12 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
            v12 = (_QWORD *)sub_B5298C(Method_ServantStatusListViewManager_OnClickCombine__);
          v13 = (System_Reflection_MethodBase_o *)sub_B52968(v12, v12[3]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusListViewManager_CallbackFunc__Invoke(callbackFunc, kind, 0, 0LL);
        }
        return;
      }
      v14 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
        v14 = (_QWORD *)sub_B5298C(Method_ServantStatusListViewManager_OnClickCombine__);
      v15 = (System_Reflection_MethodBase_o *)sub_B52968(v14, v14[3]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12082/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v17 = (System_String_o *)this;
      v18 = ServantStatusListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantStatusListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v18 = ServantStatusListViewManager___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__53_0 = static_fields->__9__53_0;
      v21 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__53_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__53_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__53_0, v22, Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__, 0LL);
        v23 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v23->__9__53_0 = _9__53_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v23->__9__53_0,
          (System_Int32_array **)_9__53_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(Instance, v21, v17, _9__53_0, -1, 0, 0, 0, 1, 28, 0, 0, 0LL, 0LL);
        return;
      }
    }
    sub_B52A5C(this, *(_QWORD *)&kind);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 3, id, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 6, id, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 4, id, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  int32_t Kind; // w2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B52A5C(v12, v13);
      Kind = ServantStatusListViewObject__GetKind(obj, v13);
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 0, Kind, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 1, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *mainInfo; // x0
  CommonUI_o *Instance; // x20
  ServantStatusListViewItem_o *v5; // x8
  System_String_o *v6; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_42B4285 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_12132/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_42B4285 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = (System_String_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    if ( ServantStatusListViewItem__get_IsEquip((ServantStatusListViewItem_o *)mainInfo, 0LL) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mainInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v5 = this->fields.mainInfo;
      if ( v5 )
      {
        v6 = mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v5, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = System_String__Format(v6, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog(Instance, mainInfo, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B52A5C(mainInfo, method);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v7; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_42B4284 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_12132/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_42B4284 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v7 = v4,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v4 = System_String__Format(v7, NumberFormat, 0LL),
          !Instance) )
    {
      sub_B52A5C(v4, v5);
    }
    CommonUI__OpenPopupMessageDialog(Instance, v4, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  CommonUI_o *Instance; // x20
  struct ServantStatusListViewItem_o *v5; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  System_String_o *v7; // x19
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_42B4286 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    this = (ServantStatusListViewManager_o *)sub_B52984(&StringLiteral_12133/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/);
    byte_42B4286 = 1;
  }
  if ( v2->fields.initMode == 1 )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    if ( mainInfo->fields.userSvtCollectionEntity )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v5 = v2->fields.mainInfo;
      if ( v5 )
      {
        userSvtCollectionEntity = v5->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v7 = (System_String_o *)this;
          v8 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v9 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v12.fields.currentCryptoKey = v8;
          *(_QWORD *)&v12.fields.fakeValue = v9;
          v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v10, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format(v7, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog(Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 5, id, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 12, maskType, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 10, index, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 7, questId, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 8, type, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 11, index, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 11, index, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnEnable(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 2, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnMoveEnd(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_42B4283 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4283 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B52A5C(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B4281 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B4281 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      objectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v11, v12);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v10,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v13);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_33207880(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B4282 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B4282 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      objectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v9, v10);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v8,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_33207632(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_33207632(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_42B4280 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_42B4280 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B52A5C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  switch ( mode )
  {
    case 1:
      ServantStatusListViewManager__set_IsInput(v4, 1, method);
      v6 = 3;
      goto LABEL_15;
    case 2:
      ServantStatusListViewManager__set_IsInput(v4, 0, method);
      v6 = 2;
      goto LABEL_15;
    case 3:
      v6 = 4;
      goto LABEL_15;
    case 4:
      v6 = 5;
      goto LABEL_15;
    case 5:
      v6 = 6;
      goto LABEL_15;
    case 6:
      v6 = 7;
      goto LABEL_15;
    case 7:
      v6 = 8;
      goto LABEL_15;
    case 8:
      v6 = 9;
      goto LABEL_15;
    case 9:
      v6 = 10;
      goto LABEL_15;
    case 10:
      v6 = 11;
LABEL_15:
      ServantStatusListViewManager__RequestListObject_33207880(v4, v6, method);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetObjectItem(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v5; // x3
  float v6; // s0
  int v7; // s1
  int32_t v10; // w1

  initMode = this->fields.initMode;
  if ( initMode == 8 )
  {
    if ( obj )
    {
      *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
      v10 = 9;
      goto LABEL_9;
    }
LABEL_10:
    sub_B52A5C(this, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
      v10 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  v10 = 3;
LABEL_9:
  ServantStatusListViewObject__Init(obj, v10, 0LL, v6, *(UnityEngine_Vector3_o *)&v7, v5);
}


void __fastcall ServantStatusListViewManager__add_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B427B & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_42B427B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  ServantStatusListViewManager__remove_callbackFunc(v11, v12, v13);
}


bool __fastcall ServantStatusListViewManager__get_IsInput(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall ServantStatusListViewManager__remove_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B427C & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_42B427C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


void __fastcall ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  if ( (byte_42B427A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B427A = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_B52A5C(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = id;
  v12 = result;
  if ( (byte_42AD390 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&ServantStatusListViewManager_ResultKind_TypeInfo);
    byte_42AD390 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager_CallbackFunc__Invoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantStatusListViewManager_CallbackFunc_o **v8; // x26
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
  ServantStatusListViewManager_CallbackFunc_o *v21; // x8
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
  ServantStatusListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (ServantStatusListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&id, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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


void __fastcall ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD38E & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewManager___c_TypeInfo);
    byte_42AD38E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ServantStatusListViewManager___c___ctor(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickCombine_b__53_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD38F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD38F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}
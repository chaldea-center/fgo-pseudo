void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  System_Array_o *v15; // x19
  struct ServantStatusListViewManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  struct ServantStatusListViewManager_StaticFields *v32; // x0
  __int64 v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantStatusListViewManager_StaticFields *v39; // x0
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4

  if ( (byte_40FDECF & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1);
    sub_B16FFC(&ServantStatusListViewManager_TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v5);
    byte_40FDECF = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v6 = (System_Array_o *)sub_B17014(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL, v2);
  v40.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v40, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->normalKindList,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = (System_Array_o *)sub_B17014(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL, v14);
  v41.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v15, v41, 0LL);
  v16 = ServantStatusListViewManager_TypeInfo->static_fields;
  v16->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v16->equipKindList,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = sub_B17014(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL, v23);
  if ( !v24 )
    goto LABEL_8;
  v31 = (System_Int32_array **)v24;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v24 + 32) = 12;
  v32 = ServantStatusListViewManager_TypeInfo->static_fields;
  v32->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v32->npcFollowerEquipKindList, v31, v25, v26, v27, v28, v29, v30);
  v24 = sub_B17014(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL, v33);
  if ( !v24 )
LABEL_8:
    sub_B170D4();
  v31 = (System_Int32_array **)v24;
  if ( !*(_DWORD *)(v24 + 24) )
  {
LABEL_9:
    sub_B17100(v24, v31, v25);
    sub_B170A0();
  }
  *(_DWORD *)(v24 + 32) = 14;
  v39 = ServantStatusListViewManager_TypeInfo->static_fields;
  v39->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v39->commandCodeKindList, v31, v25, v34, v35, v36, v37, v38);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FDECE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v8);
    byte_40FDECE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.isInput = 1;
  v20 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v20,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentKindList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x0
  UnityEngine_Object_c **v15; // x25
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Component_o *v23; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *v25; // x0
  float v26; // s8
  float v27; // s9
  UnityEngine_Transform_o *transform; // x0
  UIScrollView_o *v29; // x0
  ServantStatusListViewItem_o **p_mainInfo; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  struct ServantStatusListViewItem_o *v33; // x8
  ServantStatusListViewManager_c *IsServant; // x0
  struct ServantStatusListViewItemDraw_Kind_array **p_commandCodeKindList; // x8
  struct ServantEntity_o *svtEntity; // x8
  struct ServantStatusListViewItemDraw_Kind_array *v37; // x26
  __int64 v38; // x8
  unsigned __int64 v39; // x27
  signed __int64 v40; // x28
  float v41; // s8
  int32_t v42; // w21
  il2cpp_array_size_t v43; // w22
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  ServantStatusListViewItem_o *v45; // x8
  ServantEntity_o *v46; // x0
  ServantStatusListViewItem_o *v47; // x8
  __int64 v48; // x23
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  ServantCommentEntity_o *v51; // x0
  struct UnityEngine_GameObject_array *v52; // x8
  UnityEngine_Object_c *v53; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v54; // x22
  UnityEngine_Object_o *v55; // x22
  ServantStatusListViewObject_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *Component_ServantStatusListViewItemDrawButton; // x24
  const MethodInfo *v58; // x2
  UnityEngine_Object_c **v59; // x20
  const MethodInfo *v60; // x1
  int32_t Size; // w0
  int v62; // w25
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_Transform_o *v64; // x24
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  int v67; // w25
  float v68; // s8
  UnityEngine_Transform_o *v69; // x24
  int v70; // s0
  UnityEngine_Transform_o *v74; // x24
  int v75; // s0
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x2
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x0
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *v83; // x0
  UnityEngine_Object_c *v84; // x0
  UnityEngine_Object_o *v85; // x20
  UIScrollView_o *v86; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo);
    sub_B16FFC(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&ServantStatusListViewManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5308, v13);
    byte_40FDEC4 = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_126;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)currentKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
  v15 = &UnityEngine_Object_TypeInfo;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v23 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v23 )
      goto LABEL_126;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v23,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_126;
      v25 = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !v25 )
        goto LABEL_126;
      v26 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v27 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = UnityEngine_Component__get_transform(v25, 0LL);
      if ( !transform )
        goto LABEL_126;
      v88.fields.x = -v26;
      v88.fields.y = -v27;
      v88.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v88, 0LL);
      v29 = this->fields.scrollView;
      if ( !v29 )
        goto LABEL_126;
      UIScrollView__ResetPosition(v29, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v33 = this->fields.mainInfo;
  if ( !v33 )
    goto LABEL_126;
  if ( v33->fields.commandCodeEntity )
  {
    IsServant = ServantStatusListViewManager_TypeInfo;
    if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      IsServant = ServantStatusListViewManager_TypeInfo;
    }
    p_commandCodeKindList = &IsServant->static_fields->commandCodeKindList;
  }
  else
  {
    svtEntity = v33->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_126;
    if ( SvtType__IsServantEquip(svtEntity->fields.type, 0LL) )
    {
      if ( !*p_mainInfo )
        goto LABEL_126;
      IsServant = ServantStatusListViewManager_TypeInfo;
      if ( (*p_mainInfo)->fields.isNpcFollowerServantEquip )
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          IsServant = ServantStatusListViewManager_TypeInfo;
        }
        p_commandCodeKindList = &IsServant->static_fields->npcFollowerEquipKindList;
      }
      else
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          IsServant = ServantStatusListViewManager_TypeInfo;
        }
        p_commandCodeKindList = &IsServant->static_fields->equipKindList;
      }
    }
    else
    {
      IsServant = ServantStatusListViewManager_TypeInfo;
      if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        IsServant = ServantStatusListViewManager_TypeInfo;
      }
      p_commandCodeKindList = &IsServant->static_fields->normalKindList;
    }
  }
  v37 = *p_commandCodeKindList;
  if ( *p_commandCodeKindList )
  {
    if ( this->fields.statusObjectList )
    {
      v38 = *(_QWORD *)&v37->max_length;
      if ( (int)v38 >= 1 )
      {
        v39 = 0LL;
        v40 = (int)v38;
        v41 = 0.0;
        do
        {
          if ( v39 >= v37->max_length )
          {
LABEL_127:
            sub_B17100(IsServant, v31, v32);
            sub_B170A0();
          }
          v42 = v37->m_Items[v39 + 1];
          v43 = v42 - 1;
          if ( v42 >= 1 )
          {
            statusObjectList = this->fields.statusObjectList;
            if ( !statusObjectList )
              goto LABEL_126;
            if ( v42 <= (signed int)statusObjectList->max_length )
            {
              switch ( v42 )
              {
                case 3:
                  v45 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !v45->fields.isEquipShowMode )
                    goto LABEL_118;
                  v46 = v45->fields.svtEntity;
                  if ( !v46 )
                    goto LABEL_126;
                  IsServant = (ServantStatusListViewManager_c *)ServantEntity__get_IsServant(v46, 0LL);
                  if ( ((unsigned __int8)IsServant & 1) == 0 )
                    goto LABEL_118;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !(*p_mainInfo)->fields.isCollection )
                    goto LABEL_89;
                  goto LABEL_118;
                case 4:
                case 12:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  IsServant = (ServantStatusListViewManager_c *)ServantStatusListViewItem__IsEnableSkillInfo(
                                                                  *p_mainInfo,
                                                                  0LL);
                  if ( ((unsigned __int8)IsServant & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 5:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  IsServant = (ServantStatusListViewManager_c *)ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                                                                  *p_mainInfo,
                                                                  0LL);
                  if ( ((unsigned __int8)IsServant & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 6:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  IsServant = (ServantStatusListViewManager_c *)ServantStatusListViewItem__IsEnableAppendSkillInfo(
                                                                  *p_mainInfo,
                                                                  0LL);
                  if ( ((unsigned __int8)IsServant & 1) == 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 7:
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  IsServant = (ServantStatusListViewManager_c *)ServantStatusListViewItem__GetNpInfo(
                                                                  *p_mainInfo,
                                                                  &tdInfo,
                                                                  0LL);
                  if ( !tdInfo )
                    goto LABEL_126;
                  if ( tdInfo->fields.id <= 0 )
                    goto LABEL_118;
                  goto LABEL_89;
                case 10:
                  v47 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  v48 = 0LL;
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
                svtCommentEntityList = v47->fields.svtCommentEntityList;
                if ( !svtCommentEntityList )
                  goto LABEL_126;
                max_length = svtCommentEntityList->max_length;
                if ( (int)v48 >= max_length )
                  goto LABEL_118;
                if ( (unsigned int)v48 >= max_length )
                  goto LABEL_127;
                v51 = svtCommentEntityList->m_Items[v48];
                if ( !v51 )
                  goto LABEL_126;
                IsServant = (ServantStatusListViewManager_c *)ServantCommentEntity__IsConst(v51, 0LL);
                if ( ((unsigned __int8)IsServant & 1) == 0 )
                  break;
                v47 = *p_mainInfo;
                ++v48;
                if ( !*p_mainInfo )
                  goto LABEL_126;
              }
LABEL_89:
              v52 = this->fields.statusObjectList;
              if ( !v52 )
                goto LABEL_126;
              if ( v43 >= v52->max_length )
                goto LABEL_127;
              v53 = *v15;
              v54 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v52->m_Items[v43];
              if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v53);
              v55 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              v54,
                                              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              IsServant = (ServantStatusListViewManager_c *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
              if ( ((unsigned __int8)IsServant & 1) != 0 )
              {
                if ( !v55 )
                  goto LABEL_126;
                Component_srcLineSprite = (ServantStatusListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v55,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
                Component_ServantStatusListViewItemDrawButton = (UnityEngine_Object_o *)GameObjectExtensions__FindComponent_ServantStatusListViewItemDrawButton_(
                                                                                          (UnityEngine_GameObject_o *)v55,
                                                                                          (System_String_o *)StringLiteral_5308,
                                                                                          (const MethodInfo_19D1D48 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
                if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v15)->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(*v15);
                if ( UnityEngine_Object__op_Inequality(Component_ServantStatusListViewItemDrawButton, 0LL, 0LL) )
                {
                  if ( !Component_ServantStatusListViewItemDrawButton )
                    goto LABEL_126;
                  Component_ServantStatusListViewItemDrawButton[4].fields.m_CachedPtr = v42;
                }
                if ( !Component_srcLineSprite )
                  goto LABEL_126;
                v59 = v15;
                ServantStatusListViewObject__SetItem(Component_srcLineSprite, this->fields.mainInfo, v58);
                Size = ServantStatusListViewObject__GetSize(Component_srcLineSprite, v60);
                v62 = Size >= 0 ? Size : Size + 1;
                v63 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
                if ( !this->fields.listParent )
                  goto LABEL_126;
                v64 = v63;
                v65 = UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
                if ( !v64 )
                  goto LABEL_126;
                UnityEngine_Transform__set_parent(v64, v65, 0LL);
                v66 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
                if ( !v66 )
                  goto LABEL_126;
                v67 = v62 >> 1;
                v68 = v41 - (float)v67;
                v89.fields.x = 0.0;
                v89.fields.z = 0.0;
                v89.fields.y = v68;
                UnityEngine_Transform__set_localPosition(v66, v89, 0LL);
                v69 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
                *(UnityEngine_Quaternion_o *)&v70 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v69 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localRotation(v69, *(UnityEngine_Quaternion_o *)&v70, 0LL);
                v74 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
                *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Vector3__get_one(0LL);
                if ( !v74 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localScale(v74, *(UnityEngine_Vector3_o *)&v75, 0LL);
                listParent = this->fields.listParent;
                if ( !listParent )
                  goto LABEL_126;
                layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v55, layer, 0LL);
                ServantStatusListViewObject__SetBaseTransform(Component_srcLineSprite, v80);
                ServantStatusListViewObject__SetManager(Component_srcLineSprite, this, v81);
                objectList = this->fields.objectList;
                if ( !objectList )
                  goto LABEL_126;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
                if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
                }
                v83 = this->fields.currentKindList;
                if ( !v83 )
                  goto LABEL_126;
                v41 = v68 - (float)(ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK + v67);
                System_Collections_Generic_List_VoiceCondType_Type___Add(
                  (System_Collections_Generic_List_VoiceCondType_Type__o *)v83,
                  v42,
                  (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
                v15 = v59;
                p_mainInfo = &this->fields.mainInfo;
              }
            }
          }
LABEL_118:
          ++v39;
        }
        while ( (__int64)v39 < v40 );
      }
    }
  }
  v84 = *v15;
  v85 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v84);
  if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
  {
    v86 = this->fields.scrollView;
    if ( v86 )
    {
      UIScrollView__ResetPosition(v86, 0LL);
      return;
    }
LABEL_126:
    sub_B170D4();
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FDEC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FDEC5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v10 = this->fields.objectList;
  if ( !v10 )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v11, v12, v13, v14, v15, v16);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v18 = this->fields.scrollView;
    if ( v18 )
    {
      UIScrollView__ResetPosition(v18, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ServantStatusListViewManager__GetScrillBarValue(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  float v7; // s8
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t size; // w9
  bool v10; // vf
  int v11; // w9
  __int64 v12; // x8
  ServantStatusListViewObject_o *v13; // x19
  UnityEngine_Transform_o *transform; // x0
  float y; // s9
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  int v18; // w22
  int32_t v19; // w0
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v20; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v6);
    byte_40FDEC6 = 1;
  }
  v7 = 1.0;
  if ( this->fields.currentKindList )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      size = objectList->fields._size;
      v10 = __OFSUB__(size, 1);
      v11 = size - 1;
      if ( v11 < 0 == v10 )
      {
        v12 = (__int64)objectList->fields._items + 8 * v11;
        v13 = *(ServantStatusListViewObject_o **)(v12 + 32);
        if ( !v13 )
          goto LABEL_17;
        transform = UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v12 + 32), 0LL);
        if ( !transform )
          goto LABEL_17;
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        y = localPosition.fields.y;
        v17 = ServantStatusListViewObject__GetSize(v13, v16);
        if ( !this->fields.currentKindList )
          goto LABEL_17;
        v18 = v17;
        v19 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
                this->fields.currentKindList,
                kind,
                (const MethodInfo_2F14540 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( v19 != -1 )
        {
          v20 = this->fields.objectList;
          if ( v20 )
          {
            if ( v20->fields._size <= (unsigned int)v19 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v21 = (UnityEngine_Component_o *)v20->fields._items->m_Items[v19];
            if ( v21 )
            {
              v22 = UnityEngine_Component__get_transform(v21, 0LL);
              if ( v22 )
              {
                v26 = UnityEngine_Transform__get_localPosition(v22, 0LL);
                return (float)(v26.fields.y + (float)((float)ServantStatusListViewObject__GetSize(v13, v23) * 0.5))
                     / (float)(y + (float)((float)v18 * 0.5));
              }
            }
          }
LABEL_17:
          sub_B170D4();
        }
      }
    }
  }
  return v7;
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
  const MethodInfo *v13; // x2
  int32_t ButtonIndex; // w21
  int v15; // w0
  int32_t v16; // w1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)ownerObject, (System_String_array **)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_B170D4();
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      v13);
      v15 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))ownerObject->klass->vtable._4_GetKind.method)(
              ownerObject,
              ownerObject->klass->vtable._5_SetItem.methodPtr);
      if ( v15 == 17 )
      {
        v16 = 9;
        goto LABEL_9;
      }
      if ( v15 == 16 )
      {
        v16 = 8;
LABEL_9:
        ServantStatusListViewManager_CallbackFunc__Invoke(v9, v16, ButtonIndex, 0LL);
      }
    }
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  const MethodInfo *v12; // x1
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
      Kind = ServantStatusListViewObject__GetKind(obj, v12);
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 1, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v8; // x0
  ServantStatusListViewItem_o *v9; // x8
  System_String_o *v10; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0
  System_String_o *v13; // x0

  if ( (byte_40FDECC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_11992, v5);
    byte_40FDECC = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    if ( ServantStatusListViewItem__get_IsEquip(mainInfo, 0LL) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11992, 0LL);
      v9 = this->fields.mainInfo;
      if ( v9 )
      {
        v10 = v8;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v9, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        v13 = System_String__Format(v10, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog(Instance, v13, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v7; // x0
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v9; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0
  System_String_o *v12; // x0

  if ( (byte_40FDECB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_11992, v5);
    byte_40FDECB = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11992, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v9 = v7,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v12 = System_String__Format(v9, NumberFormat, 0LL),
          !Instance) )
    {
      sub_B170D4();
    }
    CommonUI__OpenPopupMessageDialog(Instance, v12, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v9; // x0
  struct ServantStatusListViewItem_o *v10; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  System_String_o *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w0
  Il2CppObject *NumberFormat; // x0
  System_String_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FDECD & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11993, v6);
    byte_40FDECD = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11993, 0LL);
      v10 = this->fields.mainInfo;
      if ( v10 )
      {
        userSvtCollectionEntity = v10->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v12 = v9;
          v13 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v14 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v18.fields.currentCryptoKey = v13;
          *(_QWORD *)&v18.fields.fakeValue = v14;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0LL);
          v17 = System_String__Format(v12, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog(Instance, v17, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B170D4();
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 8, type, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 11, 1, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 11, 2, 0LL);
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0

  if ( (byte_40FDECA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDECA = 1;
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
void __fastcall ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDEC8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_ServantStatusListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FDEC8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_32653544(
        ServantStatusListViewManager_o *this,
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
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDEC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantStatusListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FDEC9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_32653296(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_32653296(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  if ( (byte_40FDEC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, *(_QWORD *)&mode);
    byte_40FDEC7 = 1;
  }
  objectList = this->fields.objectList;
  this->fields.initMode = mode;
  if ( !objectList )
    sub_B170D4();
  this->fields.callbackCount = objectList->fields._size;
  switch ( mode )
  {
    case 1:
      ServantStatusListViewManager__set_IsInput(this, 1, method);
      v6 = 3;
      goto LABEL_15;
    case 2:
      ServantStatusListViewManager__set_IsInput(this, 0, method);
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
      ServantStatusListViewManager__RequestListObject_32653544(this, v6, method);
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
    sub_B170D4();
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

  if ( (byte_40FDEC2 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDEC2 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FDEC3 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDEC3 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  UIProgressBar_o *v6; // x19
  float alpha; // s0

  if ( (byte_40FDEC1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FDEC1 = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_B170D4();
    alpha = UIProgressBar__get_alpha(v6, 0LL);
    UIProgressBar__set_alpha(v6, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
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
  if ( (byte_40F7671 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&ServantStatusListViewManager_ResultKind_TypeInfo, v9);
    byte_40F7671 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantStatusListViewManager_CallbackFunc_o *v20; // x8
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
  ServantStatusListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (ServantStatusListViewManager_CallbackFunc_o **)(v4 + 32);
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
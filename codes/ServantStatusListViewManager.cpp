void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Array_o *v13; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Array_o *v21; // x19
  struct ServantStatusListViewManager_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  struct ServantStatusListViewManager_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  struct ServantStatusListViewManager_StaticFields *v46; // x0
  __int64 v47; // x0
  System_RuntimeFieldHandle_o v48; // 0:w1.4
  System_RuntimeFieldHandle_o v49; // 0:w1.4

  if ( (byte_42ECB8D & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ServantStatusListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v10,
      v11,
      v12);
    byte_42ECB8D = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v13 = (System_Array_o *)sub_B5D5DC(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v48.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v13, v48, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->normalKindList,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Array_o *)sub_B5D5DC(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v49.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v21, v49, 0LL);
  v22 = ServantStatusListViewManager_TypeInfo->static_fields;
  v22->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v22->equipKindList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = sub_B5D5DC(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v29 )
    goto LABEL_8;
  v37 = (System_Int32_array **)v29;
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v29 + 32) = 12;
  v38 = ServantStatusListViewManager_TypeInfo->static_fields;
  v38->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v38->npcFollowerEquipKindList, v37, v31, v32, v33, v34, v35, v36);
  v29 = sub_B5D5DC(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v29 )
LABEL_8:
    sub_B5D69C(v29, v30);
  v45 = (System_Int32_array **)v29;
  if ( !*(_DWORD *)(v29 + 24) )
  {
LABEL_9:
    v47 = sub_B5D6C8(v29);
    sub_B5D668(v47, 0LL);
  }
  *(_DWORD *)(v29 + 32) = 14;
  v46 = ServantStatusListViewManager_TypeInfo->static_fields;
  v46->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v46->commandCodeKindList, v45, v39, v40, v41, v42, v43, v44);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42ECB8C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v11, v12, v13);
    byte_42ECB8C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isInput = 1;
  v21 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v21,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentKindList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *currentKindList; // x0
  UnityEngine_Object_c **v35; // x25
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewObject_o *Component_WebViewObject; // x20
  float v44; // s8
  float v45; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v47; // x8
  __int64 *v48; // x8
  struct ServantEntity_o *svtEntity; // x8
  __int64 v50; // x26
  __int64 v51; // x8
  unsigned __int64 v52; // x27
  signed __int64 v53; // x28
  float v54; // s8
  int32_t v55; // w21
  il2cpp_array_size_t v56; // w22
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v58; // x8
  struct ServantStatusListViewItem_o *v59; // x8
  __int64 v60; // x23
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v63; // x8
  UnityEngine_Object_c *v64; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v65; // x22
  UnityEngine_Object_o *v66; // x22
  ServantStatusListViewObject_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *Component_ServantStatusListViewItemDrawButton; // x24
  const MethodInfo *v69; // x2
  UnityEngine_Object_c **v70; // x20
  const MethodInfo *v71; // x1
  int32_t Size; // w0
  int v73; // w25
  UnityEngine_Transform_o *v74; // x24
  int v75; // w25
  float v76; // s8
  UnityEngine_Transform_o *transform; // x24
  int v78; // s0
  UnityEngine_Transform_o *v82; // x24
  int v83; // s0
  int32_t layer; // w0
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x2
  UnityEngine_Object_c *v89; // x0
  UnityEngine_Object_o *v90; // x20
  __int64 v91; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)mainInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantStatusListViewManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_5403/*"DispObject"*/, v30, v31, v32);
    byte_42ECB81 = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_126;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    currentKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
  v35 = &UnityEngine_Object_TypeInfo;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v44 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v45 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Component__get_transform(
                                                                                                     (UnityEngine_Component_o *)currentKindList,
                                                                                                     0LL);
      if ( !currentKindList )
        goto LABEL_126;
      v93.fields.x = -v44;
      v93.fields.y = -v45;
      v93.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v93, 0LL);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
      if ( !currentKindList )
        goto LABEL_126;
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v47 = this->fields.mainInfo;
  if ( !v47 )
    goto LABEL_126;
  if ( v47->fields.commandCodeEntity )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    }
    v48 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 32LL);
  }
  else
  {
    svtEntity = v47->fields.svtEntity;
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
        v48 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 24LL);
      }
      else
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
        }
        v48 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 16LL);
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
      v48 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 8LL);
    }
  }
  v50 = *v48;
  if ( *v48 )
  {
    if ( this->fields.statusObjectList )
    {
      v51 = *(_QWORD *)(v50 + 24);
      if ( (int)v51 >= 1 )
      {
        v52 = 0LL;
        v53 = (int)v51;
        v54 = 0.0;
        do
        {
          if ( v52 >= *(unsigned int *)(v50 + 24) )
          {
LABEL_127:
            v91 = sub_B5D6C8(currentKindList);
            sub_B5D668(v91, 0LL);
          }
          v55 = *(_DWORD *)(v50 + 4 * v52 + 32);
          v56 = v55 - 1;
          if ( v55 >= 1 )
          {
            statusObjectList = this->fields.statusObjectList;
            if ( !statusObjectList )
              goto LABEL_126;
            if ( v55 <= (signed int)statusObjectList->max_length )
            {
              switch ( v55 )
              {
                case 3:
                  v58 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !v58->fields.isEquipShowMode )
                    goto LABEL_118;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)v58->fields.svtEntity;
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
                  v59 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  v60 = 0LL;
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
                svtCommentEntityList = v59->fields.svtCommentEntityList;
                if ( !svtCommentEntityList )
                  goto LABEL_126;
                max_length = svtCommentEntityList->max_length;
                if ( (int)v60 >= max_length )
                  goto LABEL_118;
                if ( (unsigned int)v60 >= max_length )
                  goto LABEL_127;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)svtCommentEntityList->m_Items[v60];
                if ( !currentKindList )
                  goto LABEL_126;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantCommentEntity__IsConst((ServantCommentEntity_o *)currentKindList, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) == 0 )
                  break;
                v59 = *p_mainInfo;
                ++v60;
                if ( !*p_mainInfo )
                  goto LABEL_126;
              }
LABEL_89:
              v63 = this->fields.statusObjectList;
              if ( !v63 )
                goto LABEL_126;
              if ( v56 >= v63->max_length )
                goto LABEL_127;
              v64 = *v35;
              v65 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v63->m_Items[v56];
              if ( (BYTE3((*v35)->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v64);
              v66 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              v65,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
              if ( ((unsigned __int8)currentKindList & 1) != 0 )
              {
                if ( !v66 )
                  goto LABEL_126;
                Component_srcLineSprite = (ServantStatusListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v66,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
                Component_ServantStatusListViewItemDrawButton = (UnityEngine_Object_o *)GameObjectExtensions__FindComponent_ServantStatusListViewItemDrawButton_(
                                                                                          (UnityEngine_GameObject_o *)v66,
                                                                                          (System_String_o *)StringLiteral_5403/*"DispObject"*/,
                                                                                          (const MethodInfo_1CC4C04 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
                if ( (BYTE3((*v35)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v35)->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(*v35);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(Component_ServantStatusListViewItemDrawButton, 0LL, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) != 0 )
                {
                  if ( !Component_ServantStatusListViewItemDrawButton )
                    goto LABEL_126;
                  Component_ServantStatusListViewItemDrawButton[4].fields.m_CachedPtr = v55;
                }
                if ( !Component_srcLineSprite )
                  goto LABEL_126;
                v70 = v35;
                ServantStatusListViewObject__SetItem(Component_srcLineSprite, this->fields.mainInfo, v69);
                Size = ServantStatusListViewObject__GetSize(Component_srcLineSprite, v71);
                v73 = Size >= 0 ? Size : Size + 1;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                if ( !this->fields.listParent )
                  goto LABEL_126;
                v74 = (UnityEngine_Transform_o *)currentKindList;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
                if ( !v74 )
                  goto LABEL_126;
                UnityEngine_Transform__set_parent(v74, (UnityEngine_Transform_o *)currentKindList, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                if ( !currentKindList )
                  goto LABEL_126;
                v75 = v73 >> 1;
                v76 = v54 - (float)v75;
                v94.fields.x = 0.0;
                v94.fields.z = 0.0;
                v94.fields.y = v76;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v94, 0LL);
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                *(UnityEngine_Quaternion_o *)&v78 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !transform )
                  goto LABEL_126;
                UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v78, 0LL);
                v82 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Vector3__get_one(0LL);
                if ( !v82 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localScale(v82, *(UnityEngine_Vector3_o *)&v83, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.listParent;
                if ( !currentKindList )
                  goto LABEL_126;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)currentKindList, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v66, layer, 0LL);
                ServantStatusListViewObject__SetBaseTransform(Component_srcLineSprite, v87);
                ServantStatusListViewObject__SetManager(Component_srcLineSprite, this, v88);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.objectList;
                if ( !currentKindList )
                  goto LABEL_126;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentKindList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
                if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
                }
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
                if ( !currentKindList )
                  goto LABEL_126;
                v54 = v76 - (float)(ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK + v75);
                System_Collections_Generic_List_VoiceCondType_Type___Add(
                  (System_Collections_Generic_List_VoiceCondType_Type__o *)currentKindList,
                  v55,
                  (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
                v35 = v70;
                p_mainInfo = &this->fields.mainInfo;
              }
            }
          }
LABEL_118:
          ++v52;
        }
        while ( (__int64)v52 < v53 );
      }
    }
  }
  v89 = *v35;
  v90 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v35)->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v89);
  if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
    if ( currentKindList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
      return;
    }
LABEL_126:
    sub_B5D69C(currentKindList, v33);
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ECB82 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42ECB82 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v31.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v31.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v23, v24, v25, v26, v27, v28);
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


// local variable allocation has failed, the output may be wrong!
float __fastcall ServantStatusListViewManager__GetScrillBarValue(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  float v12; // s9
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t size; // w9
  bool v15; // vf
  int v16; // w9
  __int64 v17; // x8
  ServantStatusListViewObject_o *v18; // x19
  float v19; // s1
  float v20; // s8
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v21; // x20
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42ECB83 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__,
      kind,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v6, v7, v8);
    this = (ServantStatusListViewManager_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__,
                                               v9,
                                               v10,
                                               v11);
    byte_42ECB83 = 1;
  }
  v12 = 1.0;
  if ( v5->fields.currentKindList )
  {
    objectList = v5->fields.objectList;
    if ( objectList )
    {
      size = objectList->fields._size;
      v15 = __OFSUB__(size, 1);
      v16 = size - 1;
      if ( v16 < 0 == v15 )
      {
        v17 = (__int64)objectList->fields._items + 8 * v16;
        v18 = *(ServantStatusListViewObject_o **)(v17 + 32);
        if ( !v18 )
          goto LABEL_17;
        this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                   *(UnityEngine_Component_o **)(v17 + 32),
                                                   0LL);
        if ( !this )
          goto LABEL_17;
        *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        this = (ServantStatusListViewManager_o *)v5->fields.currentKindList;
        if ( !this )
          goto LABEL_17;
        v20 = v19;
        this = (ServantStatusListViewManager_o *)System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
                                                   (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this,
                                                   kind,
                                                   (const MethodInfo_3045828 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( (_DWORD)this != -1 )
        {
          v21 = v5->fields.objectList;
          if ( v21 )
          {
            if ( v21->fields._size <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            this = (ServantStatusListViewManager_o *)v21->fields._items->m_Items[(int)this];
            if ( this )
            {
              this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
              if ( this )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
                return (float)(localPosition.fields.y
                             + (float)((float)ServantStatusListViewObject__GetSize(v18, v22) / 3.2))
                     / v20;
              }
            }
          }
LABEL_17:
          sub_B5D69C(this, *(_QWORD *)&kind);
        }
      }
    }
  }
  return v12;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)ownerObject, (System_String_array **)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_B5D69C(v13, v14);
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  CommonUI_o *Instance; // x19
  System_String_o *v38; // x20
  ServantStatusListViewManager___c_c *v39; // x8
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__53_0; // x22
  System_String_o *v42; // x21
  Il2CppObject *v43; // x23
  struct ServantStatusListViewManager___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  v9 = this;
  if ( (byte_42ECB8B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ServantStatusListViewManager_OnClickCombine__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__, v19, v20, v21);
    sub_B5D5C4(&ServantStatusListViewManager___c_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12139/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v25, v26, v27);
    this = (ServantStatusListViewManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42ECB8B = 1;
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
        sub_B5D560(
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
          v33 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
            v33 = (_QWORD *)sub_B5D5CC(Method_ServantStatusListViewManager_OnClickCombine__);
          v34 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v33, v33[3]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
          ServantStatusListViewManager_CallbackFunc__Invoke(callbackFunc, kind, 0, 0LL);
        }
        return;
      }
      v35 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
        v35 = (_QWORD *)sub_B5D5CC(Method_ServantStatusListViewManager_OnClickCombine__);
      v36 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v35, v35[3]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12139/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v38 = (System_String_o *)this;
      v39 = ServantStatusListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantStatusListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v39 = ServantStatusListViewManager___c_TypeInfo;
      }
      static_fields = v39->static_fields;
      _9__53_0 = static_fields->__9__53_0;
      v42 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__53_0 )
      {
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__53_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__53_0, v43, Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__, 0LL);
        v44 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v44->__9__53_0 = _9__53_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v44->__9__53_0,
          (System_Int32_array **)_9__53_0,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(Instance, v42, v38, _9__53_0, -1, 0, 0, 0, 1, 28, 0, 0, 0LL, 0LL);
        return;
      }
    }
    sub_B5D69C(this, *(_QWORD *)&kind);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B5D69C(v12, v13);
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 1, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
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
  System_String_o *mainInfo; // x0
  CommonUI_o *Instance; // x20
  ServantStatusListViewItem_o *v16; // x8
  System_String_o *v17; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_42ECB89 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12189/*"SERVANT_STATUS_TOTAL_EXP"*/, v11, v12, v13);
    byte_42ECB89 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mainInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v16 = this->fields.mainInfo;
      if ( v16 )
      {
        v17 = mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v16, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = System_String__Format(v17, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog(Instance, mainInfo, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B5D69C(mainInfo, method);
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
  CommonUI_o *Instance; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v18; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_42ECB88 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12189/*"SERVANT_STATUS_TOTAL_EXP"*/, v11, v12, v13);
    byte_42ECB88 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v18 = v15,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v15 = System_String__Format(v18, NumberFormat, 0LL),
          !Instance) )
    {
      sub_B5D69C(v15, v16);
    }
    CommonUI__OpenPopupMessageDialog(Instance, v15, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusListViewManager_o *v4; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  CommonUI_o *Instance; // x20
  struct ServantStatusListViewItem_o *v19; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  System_String_o *v21; // x19
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v4 = this;
  if ( (byte_42ECB8A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    this = (ServantStatusListViewManager_o *)sub_B5D5C4(&StringLiteral_12190/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v14, v15, v16);
    byte_42ECB8A = 1;
  }
  if ( v4->fields.initMode == 1 )
  {
    mainInfo = v4->fields.mainInfo;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12190/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v19 = v4->fields.mainInfo;
      if ( v19 )
      {
        userSvtCollectionEntity = v19->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v21 = (System_String_o *)this;
          v22 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v23 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v26.fields.currentCryptoKey = v22;
          *(_QWORD *)&v26.fields.fakeValue = v23;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v24, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format(v21, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog(Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B5D69C(this, method);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ServantStatusListViewManager_CallbackFunc__Invoke(v9, 2, 0, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnMoveEnd(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_42ECB87 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECB87 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
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
void __fastcall ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ECB85 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_ServantStatusListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42ECB85 = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v33, v34);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v32,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v35);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_33243624(
        ServantStatusListViewManager_o *this,
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
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ECB86 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantStatusListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42ECB86 = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
      &v34,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v31, v32);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v30,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v33);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_33243376(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_33243376(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewManager_o *v5; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v7; // w1

  v5 = this;
  if ( (byte_42ECB84 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               mode,
                                               (_DWORD)method,
                                               v3);
    byte_42ECB84 = 1;
  }
  objectList = v5->fields.objectList;
  v5->fields.initMode = mode;
  if ( !objectList )
    sub_B5D69C(this, *(_QWORD *)&mode);
  v5->fields.callbackCount = objectList->fields._size;
  switch ( mode )
  {
    case 1:
      ServantStatusListViewManager__set_IsInput(v5, 1, method);
      v7 = 3;
      goto LABEL_15;
    case 2:
      ServantStatusListViewManager__set_IsInput(v5, 0, method);
      v7 = 2;
      goto LABEL_15;
    case 3:
      v7 = 4;
      goto LABEL_15;
    case 4:
      v7 = 5;
      goto LABEL_15;
    case 5:
      v7 = 6;
      goto LABEL_15;
    case 6:
      v7 = 7;
      goto LABEL_15;
    case 7:
      v7 = 8;
      goto LABEL_15;
    case 8:
      v7 = 9;
      goto LABEL_15;
    case 9:
      v7 = 10;
      goto LABEL_15;
    case 10:
      v7 = 11;
LABEL_15:
      ServantStatusListViewManager__RequestListObject_33243624(v5, v7, method);
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
    sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusListViewManager_o *v12; // x0
  ServantStatusListViewManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ECB7F & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECB7F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v9->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusListViewManager__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusListViewManager_o *v12; // x0
  ServantStatusListViewItem_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ECB80 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECB80 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v9->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusListViewManager__CreateList(v12, v13, v14);
}


void __fastcall ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  if ( (byte_42ECB7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42ECB7E = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0LL);
    UIProgressBar__set_alpha(v9, alpha, 0LL);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
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
  if ( (byte_42E5DA8 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, id, callback);
    sub_B5D5C4(&ServantStatusListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5DA8 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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


void __fastcall ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DA6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5DA6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5DA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5DA7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}
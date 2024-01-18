void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Array_o *v13; // x19
  struct ServantStatusListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  struct ServantStatusListViewManager_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  struct ServantStatusListViewManager_StaticFields *v38; // x0
  __int64 v39; // x0
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4

  if ( (byte_418A7F7 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1);
    sub_B2C35C(&ServantStatusListViewManager_TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v4);
    byte_418A7F7 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v5 = (System_Array_o *)sub_B2C374(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v40.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v40, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->normalKindList,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Array_o *)sub_B2C374(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v41.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v13, v41, 0LL);
  v14 = ServantStatusListViewManager_TypeInfo->static_fields;
  v14->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->equipKindList,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = sub_B2C374(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_8;
  v29 = (System_Int32_array **)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v21 + 32) = 12;
  v30 = ServantStatusListViewManager_TypeInfo->static_fields;
  v30->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->npcFollowerEquipKindList, v29, v23, v24, v25, v26, v27, v28);
  v21 = sub_B2C374(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
LABEL_8:
    sub_B2C434(v21, v22);
  v37 = (System_Int32_array **)v21;
  if ( !*(_DWORD *)(v21 + 24) )
  {
LABEL_9:
    v39 = sub_B2C460(v21);
    sub_B2C400(v39, 0LL);
  }
  *(_DWORD *)(v21 + 32) = 14;
  v38 = ServantStatusListViewManager_TypeInfo->static_fields;
  v38->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)&v38->commandCodeKindList, v37, v31, v32, v33, v34, v35, v36);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418A7F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v5);
    byte_418A7F6 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isInput = 1;
  v13 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v13,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentKindList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v14; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *currentKindList; // x0
  UnityEngine_Object_c **v16; // x25
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WebViewObject_o *Component_WebViewObject; // x20
  float v25; // s8
  float v26; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v28; // x8
  __int64 *v29; // x8
  struct ServantEntity_o *svtEntity; // x8
  __int64 v31; // x26
  __int64 v32; // x8
  unsigned __int64 v33; // x27
  signed __int64 v34; // x28
  float v35; // s8
  int32_t v36; // w21
  il2cpp_array_size_t v37; // w22
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v39; // x8
  struct ServantStatusListViewItem_o *v40; // x8
  __int64 v41; // x23
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v44; // x8
  UnityEngine_Object_c *v45; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v46; // x22
  UnityEngine_Object_o *v47; // x22
  ServantStatusListViewObject_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *Component_ServantStatusListViewItemDrawButton; // x24
  const MethodInfo *v50; // x2
  UnityEngine_Object_c **v51; // x20
  const MethodInfo *v52; // x1
  int32_t Size; // w0
  int v54; // w25
  UnityEngine_Transform_o *v55; // x24
  int v56; // w25
  float v57; // s8
  UnityEngine_Transform_o *transform; // x24
  int v59; // s0
  UnityEngine_Transform_o *v63; // x24
  int v64; // s0
  int32_t layer; // w0
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x2
  UnityEngine_Object_c *v70; // x0
  UnityEngine_Object_o *v71; // x20
  __int64 v72; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7EC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo);
    sub_B2C35C(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&ServantStatusListViewManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_5327/*"DispObject"*/, v13);
    byte_418A7EC = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_126;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    currentKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
  v16 = &UnityEngine_Object_TypeInfo;
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
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v25 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v26 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Component__get_transform(
                                                                                                     (UnityEngine_Component_o *)currentKindList,
                                                                                                     0LL);
      if ( !currentKindList )
        goto LABEL_126;
      v74.fields.x = -v25;
      v74.fields.y = -v26;
      v74.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v74, 0LL);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
      if ( !currentKindList )
        goto LABEL_126;
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = this->fields.mainInfo;
  if ( !v28 )
    goto LABEL_126;
  if ( v28->fields.commandCodeEntity )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    }
    v29 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 32LL);
  }
  else
  {
    svtEntity = v28->fields.svtEntity;
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
        v29 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 24LL);
      }
      else
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
        }
        v29 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 16LL);
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
      v29 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 8LL);
    }
  }
  v31 = *v29;
  if ( *v29 )
  {
    if ( this->fields.statusObjectList )
    {
      v32 = *(_QWORD *)(v31 + 24);
      if ( (int)v32 >= 1 )
      {
        v33 = 0LL;
        v34 = (int)v32;
        v35 = 0.0;
        do
        {
          if ( v33 >= *(unsigned int *)(v31 + 24) )
          {
LABEL_127:
            v72 = sub_B2C460(currentKindList);
            sub_B2C400(v72, 0LL);
          }
          v36 = *(_DWORD *)(v31 + 4 * v33 + 32);
          v37 = v36 - 1;
          if ( v36 >= 1 )
          {
            statusObjectList = this->fields.statusObjectList;
            if ( !statusObjectList )
              goto LABEL_126;
            if ( v36 <= (signed int)statusObjectList->max_length )
            {
              switch ( v36 )
              {
                case 3:
                  v39 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !v39->fields.isEquipShowMode )
                    goto LABEL_118;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)v39->fields.svtEntity;
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
                  v40 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  v41 = 0LL;
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
                svtCommentEntityList = v40->fields.svtCommentEntityList;
                if ( !svtCommentEntityList )
                  goto LABEL_126;
                max_length = svtCommentEntityList->max_length;
                if ( (int)v41 >= max_length )
                  goto LABEL_118;
                if ( (unsigned int)v41 >= max_length )
                  goto LABEL_127;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)svtCommentEntityList->m_Items[v41];
                if ( !currentKindList )
                  goto LABEL_126;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantCommentEntity__IsConst((ServantCommentEntity_o *)currentKindList, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) == 0 )
                  break;
                v40 = *p_mainInfo;
                ++v41;
                if ( !*p_mainInfo )
                  goto LABEL_126;
              }
LABEL_89:
              v44 = this->fields.statusObjectList;
              if ( !v44 )
                goto LABEL_126;
              if ( v37 >= v44->max_length )
                goto LABEL_127;
              v45 = *v16;
              v46 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v44->m_Items[v37];
              if ( (BYTE3((*v16)->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v45);
              v47 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              v46,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
              if ( ((unsigned __int8)currentKindList & 1) != 0 )
              {
                if ( !v47 )
                  goto LABEL_126;
                Component_srcLineSprite = (ServantStatusListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v47,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
                Component_ServantStatusListViewItemDrawButton = (UnityEngine_Object_o *)GameObjectExtensions__FindComponent_ServantStatusListViewItemDrawButton_(
                                                                                          (UnityEngine_GameObject_o *)v47,
                                                                                          (System_String_o *)StringLiteral_5327/*"DispObject"*/,
                                                                                          (const MethodInfo_1AA8144 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
                if ( (BYTE3((*v16)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v16)->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(*v16);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(Component_ServantStatusListViewItemDrawButton, 0LL, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) != 0 )
                {
                  if ( !Component_ServantStatusListViewItemDrawButton )
                    goto LABEL_126;
                  Component_ServantStatusListViewItemDrawButton[4].fields.m_CachedPtr = v36;
                }
                if ( !Component_srcLineSprite )
                  goto LABEL_126;
                v51 = v16;
                ServantStatusListViewObject__SetItem(Component_srcLineSprite, this->fields.mainInfo, v50);
                Size = ServantStatusListViewObject__GetSize(Component_srcLineSprite, v52);
                v54 = Size >= 0 ? Size : Size + 1;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v47, 0LL);
                if ( !this->fields.listParent )
                  goto LABEL_126;
                v55 = (UnityEngine_Transform_o *)currentKindList;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
                if ( !v55 )
                  goto LABEL_126;
                UnityEngine_Transform__set_parent(v55, (UnityEngine_Transform_o *)currentKindList, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v47, 0LL);
                if ( !currentKindList )
                  goto LABEL_126;
                v56 = v54 >> 1;
                v57 = v35 - (float)v56;
                v75.fields.x = 0.0;
                v75.fields.z = 0.0;
                v75.fields.y = v57;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v75, 0LL);
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v47, 0LL);
                *(UnityEngine_Quaternion_o *)&v59 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !transform )
                  goto LABEL_126;
                UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v59, 0LL);
                v63 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v47, 0LL);
                *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_one(0LL);
                if ( !v63 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localScale(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.listParent;
                if ( !currentKindList )
                  goto LABEL_126;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)currentKindList, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v47, layer, 0LL);
                ServantStatusListViewObject__SetBaseTransform(Component_srcLineSprite, v68);
                ServantStatusListViewObject__SetManager(Component_srcLineSprite, this, v69);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.objectList;
                if ( !currentKindList )
                  goto LABEL_126;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentKindList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
                if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
                }
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
                if ( !currentKindList )
                  goto LABEL_126;
                v35 = v57 - (float)(ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK + v56);
                System_Collections_Generic_List_VoiceCondType_Type___Add(
                  (System_Collections_Generic_List_VoiceCondType_Type__o *)currentKindList,
                  v36,
                  (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
                v16 = v51;
                p_mainInfo = &this->fields.mainInfo;
              }
            }
          }
LABEL_118:
          ++v33;
        }
        while ( (__int64)v33 < v34 );
      }
    }
  }
  v70 = *v16;
  v71 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v16)->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v70);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
    if ( currentKindList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
      return;
    }
LABEL_126:
    sub_B2C434(currentKindList, v14);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418A7ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A7ED = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v19.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v11, v12, v13, v14, v15, v16);
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


// local variable allocation has failed, the output may be wrong!
float __fastcall ServantStatusListViewManager__GetScrillBarValue(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  float v7; // s8
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t size; // w9
  bool v10; // vf
  int v11; // w9
  __int64 v12; // x8
  ServantStatusListViewObject_o *v13; // x19
  float y; // s9
  const MethodInfo *v15; // x1
  int v16; // w22
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v17; // x20
  const MethodInfo *v18; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_418A7EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5);
    this = (ServantStatusListViewManager_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__,
                                               v6);
    byte_418A7EE = 1;
  }
  v7 = 1.0;
  if ( v4->fields.currentKindList )
  {
    objectList = v4->fields.objectList;
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
        this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                   *(UnityEngine_Component_o **)(v12 + 32),
                                                   0LL);
        if ( !this )
          goto LABEL_17;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        y = localPosition.fields.y;
        this = (ServantStatusListViewManager_o *)ServantStatusListViewObject__GetSize(v13, v15);
        if ( !v4->fields.currentKindList )
          goto LABEL_17;
        v16 = (int)this;
        this = (ServantStatusListViewManager_o *)System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
                                                   v4->fields.currentKindList,
                                                   kind,
                                                   (const MethodInfo_2F6B048 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( (_DWORD)this != -1 )
        {
          v17 = v4->fields.objectList;
          if ( v17 )
          {
            if ( v17->fields._size <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            this = (ServantStatusListViewManager_o *)v17->fields._items->m_Items[(int)this];
            if ( this )
            {
              this = (ServantStatusListViewManager_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
              if ( this )
              {
                v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
                return (float)(v21.fields.y + (float)((float)ServantStatusListViewObject__GetSize(v13, v18) * 0.5))
                     / (float)(y + (float)((float)v16 * 0.5));
              }
            }
          }
LABEL_17:
          sub_B2C434(this, *(_QWORD *)&kind);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)ownerObject, (System_String_array **)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_B2C434(v13, v14);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B2C434(v12, v13);
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *mainInfo; // x0
  CommonUI_o *Instance; // x20
  ServantStatusListViewItem_o *v8; // x8
  System_String_o *v9; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_418A7F4 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_12042/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_418A7F4 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mainInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12042/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v8 = this->fields.mainInfo;
      if ( v8 )
      {
        v9 = mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v8, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = System_String__Format(v9, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog(Instance, mainInfo, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B2C434(mainInfo, method);
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
  __int64 v8; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v10; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_418A7F3 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_12042/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_418A7F3 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12042/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v10 = v7,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v7 = System_String__Format(v10, NumberFormat, 0LL),
          !Instance) )
    {
      sub_B2C434(v7, v8);
    }
    CommonUI__OpenPopupMessageDialog(Instance, v7, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  CommonUI_o *Instance; // x20
  struct ServantStatusListViewItem_o *v9; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  System_String_o *v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v2 = this;
  if ( (byte_418A7F5 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    this = (ServantStatusListViewManager_o *)sub_B2C35C(&StringLiteral_12043/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v6);
    byte_418A7F5 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12043/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v9 = v2->fields.mainInfo;
      if ( v9 )
      {
        userSvtCollectionEntity = v9->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v11 = (System_String_o *)this;
          v12 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v13 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v16.fields.currentCryptoKey = v12;
          *(_QWORD *)&v16.fields.fakeValue = v13;
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v14, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format(v11, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog(Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B2C434(this, method);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_418A7F2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A7F2 = 1;
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
          sub_B2C434(v8, v7);
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A7F0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ServantStatusListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418A7F0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
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
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v18, v19);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_30332452(
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
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A7F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantStatusListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418A7F1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
      &v19,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v16, v17);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v15,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_30332204(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_30332204(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_418A7EF & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               *(_QWORD *)&mode);
    byte_418A7EF = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B2C434(this, *(_QWORD *)&mode);
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
      ServantStatusListViewManager__RequestListObject_30332452(v4, v6, method);
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
    sub_B2C434(this, obj);
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

  if ( (byte_418A7EA & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A7EA = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A7EB & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A7EB = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418A7E9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_418A7E9 = 1;
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
      sub_B2C434(v6, v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418542D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&ServantStatusListViewManager_ResultKind_TypeInfo, v9);
    byte_418542D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
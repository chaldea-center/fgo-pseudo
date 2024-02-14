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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  struct ServantStatusListViewManager_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  struct ServantStatusListViewManager_StaticFields *v37; // x0
  __int64 v38; // x0
  System_RuntimeFieldHandle_o v39; // 0:w1.4
  System_RuntimeFieldHandle_o v40; // 0:w1.4

  if ( (byte_42186E1 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1);
    sub_B0D8A4(&ServantStatusListViewManager_TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v4);
    byte_42186E1 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v5 = (System_Array_o *)sub_B0D8BC(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v39.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v39, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->normalKindList,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Array_o *)sub_B0D8BC(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v40.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v13, v40, 0LL);
  v14 = ServantStatusListViewManager_TypeInfo->static_fields;
  v14->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v14->equipKindList,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = sub_B0D8BC(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_8;
  v28 = (System_Int32_array **)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v21 + 32) = 12;
  v29 = ServantStatusListViewManager_TypeInfo->static_fields;
  v29->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v29->npcFollowerEquipKindList, v28, v22, v23, v24, v25, v26, v27);
  v21 = sub_B0D8BC(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v21 )
LABEL_8:
    sub_B0D97C(v21);
  v36 = (System_Int32_array **)v21;
  if ( !*(_DWORD *)(v21 + 24) )
  {
LABEL_9:
    v38 = sub_B0D9A8(v21);
    sub_B0D948(v38, 0LL);
  }
  *(_DWORD *)(v21 + 32) = 14;
  v37 = ServantStatusListViewManager_TypeInfo->static_fields;
  v37->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v37->commandCodeKindList, v36, v30, v31, v32, v33, v34, v35);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42186E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v6);
    byte_42186E0 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.isInput = 1;
  v16 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v16,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentKindList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *currentKindList; // x0
  UnityEngine_Object_c **v15; // x25
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewObject_o *Component_WebViewObject; // x20
  float v24; // s8
  float v25; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v27; // x8
  __int64 *v28; // x8
  struct ServantEntity_o *svtEntity; // x8
  __int64 v30; // x26
  __int64 v31; // x8
  unsigned __int64 v32; // x27
  signed __int64 v33; // x28
  float v34; // s8
  int32_t v35; // w21
  il2cpp_array_size_t v36; // w22
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v38; // x8
  struct ServantStatusListViewItem_o *v39; // x8
  __int64 v40; // x23
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v43; // x8
  UnityEngine_Object_c *v44; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v45; // x22
  UnityEngine_Object_o *v46; // x22
  ServantStatusListViewObject_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *Component_ServantStatusListViewItemDrawButton; // x24
  const MethodInfo *v49; // x2
  UnityEngine_Object_c **v50; // x20
  const MethodInfo *v51; // x1
  int32_t Size; // w0
  int v53; // w25
  UnityEngine_Transform_o *v54; // x24
  int v55; // w25
  float v56; // s8
  UnityEngine_Transform_o *transform; // x24
  int v58; // s0
  UnityEngine_Transform_o *v62; // x24
  int v63; // s0
  int32_t layer; // w0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  UnityEngine_Object_c *v69; // x0
  UnityEngine_Object_o *v70; // x20
  __int64 v71; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo);
    sub_B0D8A4(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&ServantStatusListViewManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_5343/*"DispObject"*/, v13);
    byte_42186D5 = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_126;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    currentKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
  v15 = &UnityEngine_Object_TypeInfo;
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
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v24 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v25 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Component__get_transform(
                                                                                                     (UnityEngine_Component_o *)currentKindList,
                                                                                                     0LL);
      if ( !currentKindList )
        goto LABEL_126;
      v73.fields.x = -v24;
      v73.fields.y = -v25;
      v73.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v73, 0LL);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
      if ( !currentKindList )
        goto LABEL_126;
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = this->fields.mainInfo;
  if ( !v27 )
    goto LABEL_126;
  if ( v27->fields.commandCodeEntity )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
    }
    v28 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 32LL);
  }
  else
  {
    svtEntity = v27->fields.svtEntity;
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
        v28 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 24LL);
      }
      else
      {
        if ( (WORD1(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
          currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantStatusListViewManager_TypeInfo;
        }
        v28 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 16LL);
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
      v28 = (__int64 *)(*(_QWORD *)&currentKindList[4].fields._size + 8LL);
    }
  }
  v30 = *v28;
  if ( *v28 )
  {
    if ( this->fields.statusObjectList )
    {
      v31 = *(_QWORD *)(v30 + 24);
      if ( (int)v31 >= 1 )
      {
        v32 = 0LL;
        v33 = (int)v31;
        v34 = 0.0;
        do
        {
          if ( v32 >= *(unsigned int *)(v30 + 24) )
          {
LABEL_127:
            v71 = sub_B0D9A8(currentKindList);
            sub_B0D948(v71, 0LL);
          }
          v35 = *(_DWORD *)(v30 + 4 * v32 + 32);
          v36 = v35 - 1;
          if ( v35 >= 1 )
          {
            statusObjectList = this->fields.statusObjectList;
            if ( !statusObjectList )
              goto LABEL_126;
            if ( v35 <= (signed int)statusObjectList->max_length )
            {
              switch ( v35 )
              {
                case 3:
                  v38 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  if ( !v38->fields.isEquipShowMode )
                    goto LABEL_118;
                  currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)v38->fields.svtEntity;
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
                  v39 = *p_mainInfo;
                  if ( !*p_mainInfo )
                    goto LABEL_126;
                  v40 = 0LL;
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
                svtCommentEntityList = v39->fields.svtCommentEntityList;
                if ( !svtCommentEntityList )
                  goto LABEL_126;
                max_length = svtCommentEntityList->max_length;
                if ( (int)v40 >= max_length )
                  goto LABEL_118;
                if ( (unsigned int)v40 >= max_length )
                  goto LABEL_127;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)svtCommentEntityList->m_Items[v40];
                if ( !currentKindList )
                  goto LABEL_126;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)ServantCommentEntity__IsConst((ServantCommentEntity_o *)currentKindList, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) == 0 )
                  break;
                v39 = *p_mainInfo;
                ++v40;
                if ( !*p_mainInfo )
                  goto LABEL_126;
              }
LABEL_89:
              v43 = this->fields.statusObjectList;
              if ( !v43 )
                goto LABEL_126;
              if ( v36 >= v43->max_length )
                goto LABEL_127;
              v44 = *v15;
              v45 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v43->m_Items[v36];
              if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v44);
              v46 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              v45,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
              if ( ((unsigned __int8)currentKindList & 1) != 0 )
              {
                if ( !v46 )
                  goto LABEL_126;
                Component_srcLineSprite = (ServantStatusListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v46,
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
                Component_ServantStatusListViewItemDrawButton = (UnityEngine_Object_o *)GameObjectExtensions__FindComponent_ServantStatusListViewItemDrawButton_(
                                                                                          (UnityEngine_GameObject_o *)v46,
                                                                                          (System_String_o *)StringLiteral_5343/*"DispObject"*/,
                                                                                          (const MethodInfo_1B63410 *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
                if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v15)->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(*v15);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_Object__op_Inequality(Component_ServantStatusListViewItemDrawButton, 0LL, 0LL);
                if ( ((unsigned __int8)currentKindList & 1) != 0 )
                {
                  if ( !Component_ServantStatusListViewItemDrawButton )
                    goto LABEL_126;
                  Component_ServantStatusListViewItemDrawButton[4].fields.m_CachedPtr = v35;
                }
                if ( !Component_srcLineSprite )
                  goto LABEL_126;
                v50 = v15;
                ServantStatusListViewObject__SetItem(Component_srcLineSprite, this->fields.mainInfo, v49);
                Size = ServantStatusListViewObject__GetSize(Component_srcLineSprite, v51);
                v53 = Size >= 0 ? Size : Size + 1;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
                if ( !this->fields.listParent )
                  goto LABEL_126;
                v54 = (UnityEngine_Transform_o *)currentKindList;
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
                if ( !v54 )
                  goto LABEL_126;
                UnityEngine_Transform__set_parent(v54, (UnityEngine_Transform_o *)currentKindList, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
                if ( !currentKindList )
                  goto LABEL_126;
                v55 = v53 >> 1;
                v56 = v34 - (float)v55;
                v74.fields.x = 0.0;
                v74.fields.z = 0.0;
                v74.fields.y = v56;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)currentKindList, v74, 0LL);
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
                *(UnityEngine_Quaternion_o *)&v58 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !transform )
                  goto LABEL_126;
                UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v58, 0LL);
                v62 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
                *(UnityEngine_Vector3_o *)&v63 = UnityEngine_Vector3__get_one(0LL);
                if ( !v62 )
                  goto LABEL_126;
                UnityEngine_Transform__set_localScale(v62, *(UnityEngine_Vector3_o *)&v63, 0LL);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.listParent;
                if ( !currentKindList )
                  goto LABEL_126;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)currentKindList, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v46, layer, 0LL);
                ServantStatusListViewObject__SetBaseTransform(Component_srcLineSprite, v67);
                ServantStatusListViewObject__SetManager(Component_srcLineSprite, this, v68);
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.objectList;
                if ( !currentKindList )
                  goto LABEL_126;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentKindList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
                if ( (BYTE3(ServantStatusListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
                }
                currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.currentKindList;
                if ( !currentKindList )
                  goto LABEL_126;
                v34 = v56 - (float)(ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK + v55);
                System_Collections_Generic_List_VoiceCondType_Type___Add(
                  (System_Collections_Generic_List_VoiceCondType_Type__o *)currentKindList,
                  v35,
                  (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
                v15 = v50;
                p_mainInfo = &this->fields.mainInfo;
              }
            }
          }
LABEL_118:
          ++v32;
        }
        while ( (__int64)v32 < v33 );
      }
    }
  }
  v69 = *v15;
  v70 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v15)->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v69);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    currentKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.scrollView;
    if ( currentKindList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)currentKindList, 0LL);
      return;
    }
LABEL_126:
    sub_B0D97C(currentKindList);
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42186D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_42186D6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v18.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B0D97C(objectList);
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
  if ( (byte_42186D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5);
    this = (ServantStatusListViewManager_o *)sub_B0D8A4(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__,
                                               v6);
    byte_42186D7 = 1;
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
                                                   (const MethodInfo_2FB3F50 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( (_DWORD)this != -1 )
        {
          v17 = v4->fields.objectList;
          if ( v17 )
          {
            if ( v17->fields._size <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
          sub_B0D97C(this);
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
  int32_t ButtonIndex; // w21
  int v15; // w0
  int32_t v16; // w1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)ownerObject, (System_String_array **)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_B0D97C(v13);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  CommonUI_o *Instance; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x20
  ServantStatusListViewManager___c_c *v27; // x8
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__53_0; // x22
  System_String_o *v30; // x21
  Il2CppObject *v31; // x23
  struct ServantStatusListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v9 = this;
  if ( (byte_42186DF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_ServantStatusListViewManager_OnClickCombine__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__, v13);
    sub_B0D8A4(&ServantStatusListViewManager___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_12027/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v15);
    this = (ServantStatusListViewManager_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_42186DF = 1;
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
        sub_B0D840(
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
          v19 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
            v19 = (_QWORD *)sub_B0D8AC(Method_ServantStatusListViewManager_OnClickCombine__);
          v20 = (System_Reflection_MethodBase_o *)sub_B0D888(v19, v19[3]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          ServantStatusListViewManager_CallbackFunc__Invoke(callbackFunc, kind, 0, 0LL);
        }
        return;
      }
      v21 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 75) & 2) != 0 )
        v21 = (_QWORD *)sub_B0D8AC(Method_ServantStatusListViewManager_OnClickCombine__);
      v22 = (System_Reflection_MethodBase_o *)sub_B0D888(v21, v21[3]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v26 = (System_String_o *)this;
      v27 = ServantStatusListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantStatusListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v27 = ServantStatusListViewManager___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__53_0 = static_fields->__9__53_0;
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__53_0 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__53_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
        System_Action___ctor(_9__53_0, v31, Method_ServantStatusListViewManager___c__OnClickCombine_b__53_0__, 0LL);
        v32 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v32->__9__53_0 = _9__53_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v32->__9__53_0,
          (System_Int32_array **)_9__53_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(Instance, v30, v26, _9__53_0, -1, 0, 0, 0, 1, 28, 0, 0, 0LL, 0LL);
        return;
      }
    }
    sub_B0D97C(this);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B0D97C(v12);
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
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42186DD & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12080/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_42186DD = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mainInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
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
      sub_B0D97C(mainInfo);
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

  if ( (byte_42186DC & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12080/*"SERVANT_STATUS_TOTAL_EXP"*/, v5);
    byte_42186DC = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v9 = v7,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v7 = System_String__Format(v9, NumberFormat, 0LL),
          !Instance) )
    {
      sub_B0D97C(v7);
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
  if ( (byte_42186DE & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    this = (ServantStatusListViewManager_o *)sub_B0D8A4(&StringLiteral_12081/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v6);
    byte_42186DE = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
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
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
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
      sub_B0D97C(this);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  UIScrollView_o *v7; // x0

  if ( (byte_42186DB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186DB = 1;
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
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v7);
        }
        UIScrollView__UpdatePosition(v7, 0LL);
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42186D9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_ServantStatusListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_42186D9 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      objectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_32075136(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42186DA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantStatusListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_42186DA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      objectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusListViewObject__Init(
        (ServantStatusListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_32074888(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_32074888(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_42186D8 & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_B0D8A4(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               *(_QWORD *)&mode);
    byte_42186D8 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B0D97C(this);
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
      ServantStatusListViewManager__RequestListObject_32075136(v4, v6, method);
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
    sub_B0D97C(this);
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

  if ( (byte_42186D3 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_42186D3 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_42186D4 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value);
    byte_42186D4 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  UIProgressBar_o *v7; // x19
  float alpha; // s0

  if ( (byte_42186D2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, value);
    byte_42186D2 = 1;
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
    v7 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v7 )
      sub_B0D97C(v6);
    alpha = UIProgressBar__get_alpha(v7, 0LL);
    UIProgressBar__set_alpha(v7, alpha, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212276 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&ServantStatusListViewManager_ResultKind_TypeInfo, v9);
    byte_4212276 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&id, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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


void __fastcall ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212274 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager___c_TypeInfo, v1);
    byte_4212274 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantStatusListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212275 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212275 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}
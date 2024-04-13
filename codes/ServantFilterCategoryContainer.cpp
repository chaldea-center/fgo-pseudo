void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
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
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v64; // x19
  __int64 v65; // x0
  __int64 v66; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42EAD5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantFilterCategoryContainer_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11974/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11961/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11970/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11963/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11973/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11967/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_11966/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11964/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11960/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11972/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11965/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_10584/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_11962/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_11968/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_11969/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_11945/*"SERVANT_SORT_EXPLANATION2"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_11971/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/, v61, v62, v63);
    byte_42EAD5F = 1;
  }
  v64 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v64,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v64 )
    sub_B5D69C(v65, v66);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    9,
    (System_String_o *)StringLiteral_11945/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    10,
    (System_String_o *)StringLiteral_10584/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    13,
    (System_String_o *)StringLiteral_11961/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    0,
    (System_String_o *)StringLiteral_11960/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    14,
    (System_String_o *)StringLiteral_11960/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    15,
    (System_String_o *)StringLiteral_11960/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    1,
    (System_String_o *)StringLiteral_11966/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    2,
    (System_String_o *)StringLiteral_11965/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    3,
    (System_String_o *)StringLiteral_11973/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    4,
    (System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    5,
    (System_String_o *)StringLiteral_11963/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    6,
    (System_String_o *)StringLiteral_11963/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    8,
    (System_String_o *)StringLiteral_11969/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    12,
    (System_String_o *)StringLiteral_11972/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    19,
    (System_String_o *)StringLiteral_11970/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    20,
    (System_String_o *)StringLiteral_11971/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    7,
    (System_String_o *)StringLiteral_11967/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    16,
    (System_String_o *)StringLiteral_11962/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    17,
    (System_String_o *)StringLiteral_11964/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v64,
    18,
    (System_String_o *)StringLiteral_11974/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v64;
  sub_B5D560(static_fields, (System_Int32_array **)v64, v68, v69, v70, v71, v72, v73);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.LINE_SPRITE_DIFF_Y = 0x3FC0000042880000LL;
  *(_OWORD *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y = xmmword_32A52C0;
  *(_QWORD *)&this->fields.categoryKind = 0x3E700000005LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterCategoryContainer__GridLayout(
        ServantFilterCategoryContainer_o *this,
        UIGrid_o *gridLayout,
        UIGrid_o *gridGet,
        bool isLast,
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
  UnityEngine_Object_o *widget; // x23
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *ChildList; // x0
  __int64 v29; // x1
  float cellWidth; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float v32; // s8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v33; // x22
  ServantFilterCategoryContainer___c_c *v34; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__22_0; // x23
  Il2CppObject *v37; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w22
  float v46; // s11
  float v47; // s0
  int32_t v48; // w0
  int32_t v49; // w21
  int32_t v50; // w22
  struct UISprite_o **p_lineSprite; // x23
  int32_t categoryKind; // w20
  float v53; // s9
  UnityEngine_GameObject_o *v54; // x0
  UIWidget_o *v55; // x20
  int32_t v56; // w0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAD5D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Transform__FindAll__,
      (_DWORD)gridLayout,
      (_DWORD)gridGet,
      isLast);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__get_Count__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_Transform___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_Transform__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__, v21, v22, v23);
    sub_B5D5C4(&ServantFilterCategoryContainer___c_TypeInfo, v24, v25, v26);
    byte_42EAD5D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gridLayout, 0LL, 0LL) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Object__op_Inequality(widget, 0LL, 0LL);
    if ( ((unsigned __int8)ChildList & 1) != 0 )
    {
      if ( !gridGet )
        goto LABEL_44;
      cellWidth = gridGet->fields.cellWidth;
      if ( SLODWORD(cellWidth) <= 5 )
      {
        if ( LODWORD(cellWidth) == 5 )
        {
          if ( !gridLayout )
            goto LABEL_44;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gridLayout, 0LL);
          GameObjectExtensions__SetLocalScale(
            gameObject,
            *(UnityEngine_Vector3_o *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y,
            0LL);
          gridLayout->fields.cellHeight = this->fields.GRID_COLUMN_5_GRID_CELL_SIZE.fields.y;
          *(float *)&gridLayout->fields.animateSmoothly = this->fields.LINE_SPRITE_DIFF_Y;
        }
        else if ( !gridLayout )
        {
          goto LABEL_44;
        }
        ((void (__fastcall *)(UIGrid_o *, Il2CppMethodPointer))gridLayout->klass->vtable._8_Reposition.method)(
          gridLayout,
          gridLayout->klass->vtable._9_ResetPosition.methodPtr);
        v32 = *(float *)&gridLayout->fields.animateSmoothly;
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UIGrid__GetChildList(gridLayout, 0LL);
        v33 = ChildList;
        v34 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( (BYTE3(ServantFilterCategoryContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
          v34 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        static_fields = v34->static_fields;
        _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)static_fields->__9;
          _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_Transform__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__22_0,
            v37,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_Transform___ctor__);
          v38 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          v38->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v38->__9__22_0,
            (System_Int32_array **)_9__22_0,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        if ( !v33
          || (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(v33, (System_Predicate_T__o *)_9__22_0, (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_Transform__FindAll__)) == 0LL
          || (v45 = UnityEngine_Mathf__CeilToInt(
                      (float)ChildList->fields._size / (float)SLODWORD(gridLayout->fields.cellWidth),
                      0LL),
              (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL)) == 0LL) )
        {
LABEL_44:
          sub_B5D69C(ChildList, v29);
        }
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v46 = fabsf(localPosition.fields.y);
        v47 = UnityEngine_Mathf__Max(0.0, (float)v45 + -1.0, 0LL);
        v48 = UnityEngine_Mathf__CeilToInt(
                -(float)(*(float *)&this->fields.WIDGET_HEIGHT_DIFF
                       + (float)((float)((float)(v32 * 0.5) + v46)
                               + (float)(v47 * *(float *)&gridLayout->fields.animateSmoothly))),
                0LL);
        if ( *(&this->fields.categoryKind + 1) == 19 )
          v49 = v48 - 3;
        else
          v49 = v48;
        v50 = UnityEngine_Mathf__Abs_41629140(v49, 0LL);
        if ( isLast )
        {
          p_lineSprite = &this->fields.lineSprite;
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_44;
          categoryKind = this->fields.categoryKind;
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
          if ( !ChildList )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ChildList, 0, 0LL);
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)*p_lineSprite;
          if ( !*p_lineSprite )
            goto LABEL_44;
          v53 = (float)(categoryKind + v50);
        }
        else
        {
          p_lineSprite = &this->fields.lineSprite;
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_44;
          v53 = (float)((float)((float)SHIDWORD(ChildList[4].klass) * 0.5) + (float)v50)
              + (float)this->fields.categoryKind;
        }
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v54, (float)v49, 0LL);
        v55 = this->fields.widget;
        v56 = UnityEngine_Mathf__CeilToInt(v53, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Mathf__Abs_41629140(v56, 0LL);
        if ( !v55 )
          goto LABEL_44;
        UIWidget__set_height(v55, (int32_t)ChildList, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.widget;
        if ( !ChildList )
          goto LABEL_44;
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(*(&this->fields.categoryKind + 1) - 16) <= 2 )
        {
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)*p_lineSprite;
          if ( *p_lineSprite )
          {
            v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v57, (float)v49 + -1.0, 0LL);
            return;
          }
          goto LABEL_44;
        }
      }
    }
  }
}


void __fastcall ServantFilterCategoryContainer__Layout(
        ServantFilterCategoryContainer_o *this,
        bool isLast,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v17; // x1
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v20; // x21
  ServantFilterCategoryContainer_c *v21; // x0
  System_String_o *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x4
  UnityEngine_Object_o *grid2; // x21
  UnityEngine_Object_o *v27; // x21
  const MethodInfo *v28; // x4

  if ( (byte_42EAD5C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantFilterCategoryContainer_TypeInfo, v12, v13, v14);
    byte_42EAD5C = 1;
  }
  v15 = *(&this->fields.categoryKind + 1);
  if ( (unsigned int)(v15 - 998) < 2 || v15 == 11 )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
    {
      CategoryTitleLocalizationKeyDic = this->fields.widget;
      if ( CategoryTitleLocalizationKeyDic )
      {
        UIWidget__ResizeCollider(CategoryTitleLocalizationKeyDic, 0LL);
        return;
      }
LABEL_43:
      sub_B5D69C(CategoryTitleLocalizationKeyDic, v17);
    }
  }
  else
  {
    titleLabal = (UnityEngine_Object_o *)this->fields.titleLabal;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(titleLabal, 0LL, 0LL) )
    {
      v20 = this->fields.titleLabal;
      v21 = ServantFilterCategoryContainer_TypeInfo;
      if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v21 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v21->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_43;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)CategoryTitleLocalizationKeyDic,
               *(&this->fields.categoryKind + 1),
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get(Item, 0LL);
      if ( !v20 )
        goto LABEL_43;
      UILabel__set_text(v20, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v25);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v27 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v28);
    }
  }
}


void __fastcall ServantFilterCategoryContainer__SetActive(
        ServantFilterCategoryContainer_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterCategoryContainer__SetOldFilterLayout(
        ServantFilterCategoryContainer_o *this,
        int32_t position1,
        int32_t position2,
        int32_t position3,
        bool isDispLineSprite,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UILabel_o *titleLabal; // x24
  ServantFilterCategoryContainer_c *v21; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *CategoryTitleLocalizationKeyDic; // x0
  System_String_o *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_42EAD5E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      position1,
      position2,
      *(_QWORD *)&position3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantFilterCategoryContainer_TypeInfo, v17, v18, v19);
    byte_42EAD5E = 1;
  }
  titleLabal = this->fields.titleLabal;
  v21 = ServantFilterCategoryContainer_TypeInfo;
  if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
    v21 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v21->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           CategoryTitleLocalizationKeyDic,
           *(&this->fields.categoryKind + 1),
           (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)LocalizationManager__Get(Item, 0LL);
  if ( !titleLabal )
    goto LABEL_24;
  UILabel__set_text(titleLabal, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.titleLabal;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)position1, 0LL);
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.grid;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_24;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v26, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_24;
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v27, (float)position3, 0LL);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CategoryTitleLocalizationKeyDic, isDispLineSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterCategoryContainer__SetPosition(
        ServantFilterCategoryContainer_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantFilterCategoryContainer__get_BottomPosition(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *widget; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  struct UIWidget_o *v7; // x8
  float v8; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  widget = (UnityEngine_Component_o *)this->fields.widget;
  if ( !widget
    || (widget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(widget, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)widget, 0LL),
        (v7 = this->fields.widget) == 0LL) )
  {
    sub_B5D69C(widget, method);
  }
  v8 = v5 - (float)v7->fields.mHeight;
  result.fields.z = v6;
  result.fields.y = v8;
  result.fields.x = v4;
  return result;
}


int32_t __fastcall ServantFilterCategoryContainer__get_CategoryKind(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  return *(&this->fields.categoryKind + 1);
}


UIGrid_o *__fastcall ServantFilterCategoryContainer__get_Grid(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  return this->fields.grid;
}


UIGrid_o *__fastcall ServantFilterCategoryContainer__get_Grid2(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  return this->fields.grid2;
}


void __fastcall ServantFilterCategoryContainer___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D59 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterCategoryContainer___c_TypeInfo, v1, v2, v3);
    byte_42E5D59 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantFilterCategoryContainer___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantFilterCategoryContainer___c___ctor(
        ServantFilterCategoryContainer___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantFilterCategoryContainer___c___GridLayout_b__22_0(
        ServantFilterCategoryContainer___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (ServantFilterCategoryContainer___c_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)x,
                                                         0LL)) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
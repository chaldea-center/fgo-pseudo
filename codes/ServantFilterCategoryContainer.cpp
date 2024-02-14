void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v23; // x19
  __int64 v24; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42168D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v4);
    sub_B0D8A4(&ServantFilterCategoryContainer_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11863/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v6);
    sub_B0D8A4(&StringLiteral_11850/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v7);
    sub_B0D8A4(&StringLiteral_11859/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/, v8);
    sub_B0D8A4(&StringLiteral_11852/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v9);
    sub_B0D8A4(&StringLiteral_11862/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v10);
    sub_B0D8A4(&StringLiteral_11856/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v11);
    sub_B0D8A4(&StringLiteral_11855/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v12);
    sub_B0D8A4(&StringLiteral_11853/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v13);
    sub_B0D8A4(&StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v14);
    sub_B0D8A4(&StringLiteral_11861/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v15);
    sub_B0D8A4(&StringLiteral_11854/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v16);
    sub_B0D8A4(&StringLiteral_10492/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v17);
    sub_B0D8A4(&StringLiteral_11851/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v18);
    sub_B0D8A4(&StringLiteral_11857/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v19);
    sub_B0D8A4(&StringLiteral_11858/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v20);
    sub_B0D8A4(&StringLiteral_11834/*"SERVANT_SORT_EXPLANATION2"*/, v21);
    sub_B0D8A4(&StringLiteral_11860/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/, v22);
    byte_42168D0 = 1;
  }
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v23 )
    sub_B0D97C(v24);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    9,
    (System_String_o *)StringLiteral_11834/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    10,
    (System_String_o *)StringLiteral_10492/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    13,
    (System_String_o *)StringLiteral_11850/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    0,
    (System_String_o *)StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    14,
    (System_String_o *)StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    15,
    (System_String_o *)StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    1,
    (System_String_o *)StringLiteral_11855/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    2,
    (System_String_o *)StringLiteral_11854/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    3,
    (System_String_o *)StringLiteral_11862/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    4,
    (System_String_o *)StringLiteral_11857/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    5,
    (System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    6,
    (System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    8,
    (System_String_o *)StringLiteral_11858/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    12,
    (System_String_o *)StringLiteral_11861/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    19,
    (System_String_o *)StringLiteral_11859/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    20,
    (System_String_o *)StringLiteral_11860/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    7,
    (System_String_o *)StringLiteral_11856/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    16,
    (System_String_o *)StringLiteral_11851/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    17,
    (System_String_o *)StringLiteral_11853/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    18,
    (System_String_o *)StringLiteral_11863/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v23;
  sub_B0D840(static_fields, (System_Int32_array **)v23, v26, v27, v28, v29, v30, v31);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.LINE_SPRITE_DIFF_Y = 0x3FC0000042880000LL;
  *(_OWORD *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y = xmmword_32059A0;
  *(_QWORD *)&this->fields.categoryKind = 0x3E700000005LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantFilterCategoryContainer__GridLayout(
        ServantFilterCategoryContainer_o *this,
        UIGrid_o *gridLayout,
        UIGrid_o *gridGet,
        bool isLast,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *widget; // x23
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *ChildList; // x0
  float cellWidth; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float v19; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v22; // x22
  ServantFilterCategoryContainer___c_c *v23; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__22_0; // x23
  Il2CppObject *v26; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w22
  float v35; // s11
  float v36; // s0
  int32_t v37; // w0
  int32_t v38; // w21
  int32_t v39; // w22
  struct UISprite_o **p_lineSprite; // x23
  int32_t categoryKind; // w20
  float v42; // s9
  UnityEngine_GameObject_o *v43; // x0
  UIWidget_o *v44; // x20
  int32_t v45; // w0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42168CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__FindAll__, gridLayout);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__get_Count__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_Transform___ctor__, v11);
    sub_B0D8A4(&System_Predicate_Transform__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__, v13);
    sub_B0D8A4(&ServantFilterCategoryContainer___c_TypeInfo, v14);
    byte_42168CE = 1;
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
        v19 = *(float *)&gridLayout->fields.animateSmoothly;
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UIGrid__GetChildList(gridLayout, 0LL);
        v22 = ChildList;
        v23 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( (BYTE3(ServantFilterCategoryContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
          v23 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        static_fields = v23->static_fields;
        _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          }
          v26 = (Il2CppObject *)static_fields->__9;
          _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                System_Predicate_Transform__TypeInfo,
                                                                                v20,
                                                                                v21);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__22_0,
            v26,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_Transform___ctor__);
          v27 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          v27->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v27->__9__22_0,
            (System_Int32_array **)_9__22_0,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
        }
        if ( !v22
          || (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(v22, (System_Predicate_T__o *)_9__22_0, (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_Transform__FindAll__)) == 0LL
          || (v34 = UnityEngine_Mathf__CeilToInt(
                      (float)ChildList->fields._size / (float)SLODWORD(gridLayout->fields.cellWidth),
                      0LL),
              (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL)) == 0LL) )
        {
LABEL_44:
          sub_B0D97C(ChildList);
        }
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v35 = fabsf(localPosition.fields.y);
        v36 = UnityEngine_Mathf__Max(0.0, (float)v34 + -1.0, 0LL);
        v37 = UnityEngine_Mathf__CeilToInt(
                -(float)(*(float *)&this->fields.WIDGET_HEIGHT_DIFF
                       + (float)((float)((float)(v19 * 0.5) + v35)
                               + (float)(v36 * *(float *)&gridLayout->fields.animateSmoothly))),
                0LL);
        if ( *(&this->fields.categoryKind + 1) == 19 )
          v38 = v37 - 3;
        else
          v38 = v37;
        v39 = UnityEngine_Mathf__Abs_40818848(v38, 0LL);
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
          v42 = (float)(categoryKind + v39);
        }
        else
        {
          p_lineSprite = &this->fields.lineSprite;
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_44;
          v42 = (float)((float)((float)SHIDWORD(ChildList[4].klass) * 0.5) + (float)v39)
              + (float)this->fields.categoryKind;
        }
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v43, (float)v38, 0LL);
        v44 = this->fields.widget;
        v45 = UnityEngine_Mathf__CeilToInt(v42, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Mathf__Abs_40818848(v45, 0LL);
        if ( !v44 )
          goto LABEL_44;
        UIWidget__set_height(v44, (int32_t)ChildList, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.widget;
        if ( !ChildList )
          goto LABEL_44;
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(*(&this->fields.categoryKind + 1) - 16) <= 2 )
        {
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)*p_lineSprite;
          if ( *p_lineSprite )
          {
            v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v46, (float)v38 + -1.0, 0LL);
            return;
          }
          goto LABEL_44;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterCategoryContainer__Layout(
        ServantFilterCategoryContainer_o *this,
        bool isLast,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int v8; // w8
  UnityEngine_Object_o *widget; // x20
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v12; // x21
  ServantFilterCategoryContainer_c *v13; // x0
  System_String_o *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v16; // x21
  const MethodInfo *v17; // x4
  UnityEngine_Object_o *grid2; // x21
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_42168CD & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&ServantFilterCategoryContainer_TypeInfo, v7);
    byte_42168CD = 1;
  }
  v8 = *(&this->fields.categoryKind + 1);
  if ( (unsigned int)(v8 - 998) < 2 || v8 == 11 )
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
      sub_B0D97C(CategoryTitleLocalizationKeyDic);
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
      v12 = this->fields.titleLabal;
      v13 = ServantFilterCategoryContainer_TypeInfo;
      if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v13 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v13->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_43;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)CategoryTitleLocalizationKeyDic,
               *(&this->fields.categoryKind + 1),
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get(Item, 0LL);
      if ( !v12 )
        goto LABEL_43;
      UILabel__set_text(v12, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v17);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v20);
    }
  }
}


void __fastcall ServantFilterCategoryContainer__SetActive(
        ServantFilterCategoryContainer_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabal; // x24
  ServantFilterCategoryContainer_c *v15; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *CategoryTitleLocalizationKeyDic; // x0
  System_String_o *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_42168CF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&ServantFilterCategoryContainer_TypeInfo, v13);
    byte_42168CF = 1;
  }
  titleLabal = this->fields.titleLabal;
  v15 = ServantFilterCategoryContainer_TypeInfo;
  if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
    v15 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v15->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           CategoryTitleLocalizationKeyDic,
           *(&this->fields.categoryKind + 1),
           (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
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
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v20, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_24;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v21, (float)position3, 0LL);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B0D97C(CategoryTitleLocalizationKeyDic);
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
    sub_B0D97C(widget);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0

  if ( (byte_421222E & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterCategoryContainer___c_TypeInfo, v1);
    byte_421222E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantFilterCategoryContainer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
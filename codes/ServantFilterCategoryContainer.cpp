void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4189F47 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v3);
    sub_B2C35C(&ServantFilterCategoryContainer_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_11842/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v5);
    sub_B2C35C(&StringLiteral_11831/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v6);
    sub_B2C35C(&StringLiteral_11833/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v7);
    sub_B2C35C(&StringLiteral_11841/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v8);
    sub_B2C35C(&StringLiteral_11837/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v9);
    sub_B2C35C(&StringLiteral_11836/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v10);
    sub_B2C35C(&StringLiteral_11834/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v11);
    sub_B2C35C(&StringLiteral_11830/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v12);
    sub_B2C35C(&StringLiteral_11840/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v13);
    sub_B2C35C(&StringLiteral_11835/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v14);
    sub_B2C35C(&StringLiteral_10467/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v15);
    sub_B2C35C(&StringLiteral_11832/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v16);
    sub_B2C35C(&StringLiteral_11838/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v17);
    sub_B2C35C(&StringLiteral_11839/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v18);
    sub_B2C35C(&StringLiteral_11815/*"SERVANT_SORT_EXPLANATION2"*/, v19);
    byte_4189F47 = 1;
  }
  v20 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v20,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v20 )
    sub_B2C434(v21, v22);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    9,
    (System_String_o *)StringLiteral_11815/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    10,
    (System_String_o *)StringLiteral_10467/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    13,
    (System_String_o *)StringLiteral_11831/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    0,
    (System_String_o *)StringLiteral_11830/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    14,
    (System_String_o *)StringLiteral_11830/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    15,
    (System_String_o *)StringLiteral_11830/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    1,
    (System_String_o *)StringLiteral_11836/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    2,
    (System_String_o *)StringLiteral_11835/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    3,
    (System_String_o *)StringLiteral_11841/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    4,
    (System_String_o *)StringLiteral_11838/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    5,
    (System_String_o *)StringLiteral_11833/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    6,
    (System_String_o *)StringLiteral_11833/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    8,
    (System_String_o *)StringLiteral_11839/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    12,
    (System_String_o *)StringLiteral_11840/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    7,
    (System_String_o *)StringLiteral_11837/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    16,
    (System_String_o *)StringLiteral_11832/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    17,
    (System_String_o *)StringLiteral_11834/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v20,
    18,
    (System_String_o *)StringLiteral_11842/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v20;
  sub_B2C2F8(static_fields, (System_Int32_array **)v20, v24, v25, v26, v27, v28, v29);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.LINE_SPRITE_DIFF_Y = 0x3FC0000042880000LL;
  *(_OWORD *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y = xmmword_31A4110;
  *(_QWORD *)&this->fields.categoryKind = 0x3E700000005LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int v14; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v16; // x1
  void *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v19; // x21
  ServantFilterCategoryContainer_c *v20; // x0
  System_String_o *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v23; // x21
  int v24; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v26; // x8
  struct UIGrid_o *v27; // x8
  float v28; // s9
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v29; // x21
  ServantFilterCategoryContainer___c_c *v30; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_0; // x22
  Il2CppObject *v33; // x23
  struct ServantFilterCategoryContainer___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UIGrid_o *v41; // x8
  int v42; // w21
  float y; // s8
  float v44; // s0
  struct UIGrid_o *v45; // x8
  int v46; // w21
  int32_t v47; // w22
  struct UISprite_o **p_lineSprite; // x23
  int32_t categoryKind; // w20
  float v50; // s9
  UnityEngine_GameObject_o *v51; // x0
  UIWidget_o *v52; // x20
  int32_t v53; // w0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189F45 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__FindAll__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__get_Count__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_Transform___ctor__, v9);
    sub_B2C35C(&System_Predicate_Transform__TypeInfo, v10);
    sub_B2C35C(&ServantFilterCategoryContainer_TypeInfo, v11);
    sub_B2C35C(&Method_ServantFilterCategoryContainer___c__Layout_b__18_0__, v12);
    sub_B2C35C(&ServantFilterCategoryContainer___c_TypeInfo, v13);
    byte_4189F45 = 1;
  }
  v14 = *(&this->fields.categoryKind + 1);
  if ( (unsigned int)(v14 - 998) < 2 || v14 == 11 )
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
        UIWidget__ResizeCollider((UIWidget_o *)CategoryTitleLocalizationKeyDic, 0LL);
        return;
      }
LABEL_66:
      sub_B2C434(CategoryTitleLocalizationKeyDic, v16);
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
      v19 = this->fields.titleLabal;
      v20 = ServantFilterCategoryContainer_TypeInfo;
      if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v20 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = v20->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_66;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)CategoryTitleLocalizationKeyDic,
               *(&this->fields.categoryKind + 1),
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      CategoryTitleLocalizationKeyDic = LocalizationManager__Get(Item, 0LL);
      if ( !v19 )
        goto LABEL_66;
      UILabel__set_text(v19, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v23 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        CategoryTitleLocalizationKeyDic = this->fields.grid;
        if ( !CategoryTitleLocalizationKeyDic )
          goto LABEL_66;
        v24 = *((_DWORD *)CategoryTitleLocalizationKeyDic + 9);
        if ( v24 <= 5 )
        {
          if ( v24 == 5 )
          {
            gameObject = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic,
                           0LL);
            GameObjectExtensions__SetLocalScale(
              gameObject,
              *(UnityEngine_Vector3_o *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y,
              0LL);
            v26 = this->fields.grid;
            if ( !v26 )
              goto LABEL_66;
            v26->fields.cellHeight = this->fields.GRID_COLUMN_5_GRID_CELL_SIZE.fields.y;
            v27 = this->fields.grid;
            if ( !v27 )
              goto LABEL_66;
            *(float *)&v27->fields.animateSmoothly = this->fields.LINE_SPRITE_DIFF_Y;
            CategoryTitleLocalizationKeyDic = this->fields.grid;
            if ( !CategoryTitleLocalizationKeyDic )
              goto LABEL_66;
          }
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)CategoryTitleLocalizationKeyDic + 440LL))(
            CategoryTitleLocalizationKeyDic,
            *(_QWORD *)(*(_QWORD *)CategoryTitleLocalizationKeyDic + 448LL));
          CategoryTitleLocalizationKeyDic = this->fields.grid;
          if ( !CategoryTitleLocalizationKeyDic )
            goto LABEL_66;
          v28 = *((float *)CategoryTitleLocalizationKeyDic + 11);
          CategoryTitleLocalizationKeyDic = UIGrid__GetChildList((UIGrid_o *)CategoryTitleLocalizationKeyDic, 0LL);
          v29 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)CategoryTitleLocalizationKeyDic;
          v30 = ServantFilterCategoryContainer___c_TypeInfo;
          if ( (BYTE3(ServantFilterCategoryContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
            v30 = ServantFilterCategoryContainer___c_TypeInfo;
          }
          static_fields = v30->static_fields;
          _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_0;
          if ( !_9__18_0 )
          {
            if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30);
              static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
            }
            v33 = (Il2CppObject *)static_fields->__9;
            _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_Transform__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              _9__18_0,
              v33,
              Method_ServantFilterCategoryContainer___c__Layout_b__18_0__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_Transform___ctor__);
            v34 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
            v34->__9__18_0 = (struct System_Predicate_Transform__o *)_9__18_0;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v34->__9__18_0,
              (System_Int32_array **)_9__18_0,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          if ( !v29 )
            goto LABEL_66;
          CategoryTitleLocalizationKeyDic = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                              v29,
                                              (System_Predicate_T__o *)_9__18_0,
                                              (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_Transform__FindAll__);
          if ( !CategoryTitleLocalizationKeyDic )
            goto LABEL_66;
          v41 = this->fields.grid;
          if ( !v41 )
            goto LABEL_66;
          CategoryTitleLocalizationKeyDic = (void *)UnityEngine_Mathf__CeilToInt(
                                                      (float)*((int *)CategoryTitleLocalizationKeyDic + 6)
                                                    / (float)SLODWORD(v41->fields.cellWidth),
                                                      0LL);
          if ( !this->fields.grid )
            goto LABEL_66;
          v42 = (int)CategoryTitleLocalizationKeyDic;
          CategoryTitleLocalizationKeyDic = UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.grid,
                                              0LL);
          if ( !CategoryTitleLocalizationKeyDic )
            goto LABEL_66;
          localPosition = UnityEngine_Transform__get_localPosition(
                            (UnityEngine_Transform_o *)CategoryTitleLocalizationKeyDic,
                            0LL);
          y = localPosition.fields.y;
          v44 = UnityEngine_Mathf__Max(0.0, (float)v42 + -1.0, 0LL);
          v45 = this->fields.grid;
          if ( !v45 )
            goto LABEL_66;
          v46 = UnityEngine_Mathf__CeilToInt(
                  -(float)(*(float *)&this->fields.WIDGET_HEIGHT_DIFF
                         + (float)((float)((float)(v28 * 0.5) + fabsf(y))
                                 + (float)(v44 * *(float *)&v45->fields.animateSmoothly))),
                  0LL);
          v47 = UnityEngine_Mathf__Abs_40694508(v46, 0LL);
          if ( isLast )
          {
            p_lineSprite = &this->fields.lineSprite;
            CategoryTitleLocalizationKeyDic = this->fields.lineSprite;
            if ( !CategoryTitleLocalizationKeyDic )
              goto LABEL_66;
            categoryKind = this->fields.categoryKind;
            CategoryTitleLocalizationKeyDic = UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic,
                                                0LL);
            if ( !CategoryTitleLocalizationKeyDic )
              goto LABEL_66;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CategoryTitleLocalizationKeyDic, 0, 0LL);
            CategoryTitleLocalizationKeyDic = *p_lineSprite;
            if ( !*p_lineSprite )
              goto LABEL_66;
            v50 = (float)(categoryKind + v47);
          }
          else
          {
            p_lineSprite = &this->fields.lineSprite;
            CategoryTitleLocalizationKeyDic = this->fields.lineSprite;
            if ( !CategoryTitleLocalizationKeyDic )
              goto LABEL_66;
            v50 = (float)((float)((float)*((int *)CategoryTitleLocalizationKeyDic + 41) * 0.5) + (float)v47)
                + (float)this->fields.categoryKind;
          }
          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
          GameObjectExtensions__SetLocalPositionY(v51, (float)v46, 0LL);
          v52 = this->fields.widget;
          v53 = UnityEngine_Mathf__CeilToInt(v50, 0LL);
          CategoryTitleLocalizationKeyDic = (void *)UnityEngine_Mathf__Abs_40694508(v53, 0LL);
          if ( !v52 )
            goto LABEL_66;
          UIWidget__set_height(v52, (int32_t)CategoryTitleLocalizationKeyDic, 0LL);
          CategoryTitleLocalizationKeyDic = this->fields.widget;
          if ( !CategoryTitleLocalizationKeyDic )
            goto LABEL_66;
          UIWidget__ResizeCollider((UIWidget_o *)CategoryTitleLocalizationKeyDic, 0LL);
          if ( (unsigned int)(*(&this->fields.categoryKind + 1) - 16) <= 2 )
          {
            CategoryTitleLocalizationKeyDic = *p_lineSprite;
            if ( !*p_lineSprite )
              goto LABEL_66;
            v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
            GameObjectExtensions__SetLocalPositionY(v54, (float)v46 + -1.0, 0LL);
          }
        }
      }
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
    sub_B2C434(0LL, v5);
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

  if ( (byte_4189F46 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&ServantFilterCategoryContainer_TypeInfo, v13);
    byte_4189F46 = 1;
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
           (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
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
    sub_B2C434(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
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
    sub_B2C434(widget, method);
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


void __fastcall ServantFilterCategoryContainer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0

  if ( (byte_41853E7 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterCategoryContainer___c_TypeInfo, v1);
    byte_41853E7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantFilterCategoryContainer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantFilterCategoryContainer___c___ctor(
        ServantFilterCategoryContainer___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantFilterCategoryContainer___c___Layout_b__18_0(
        ServantFilterCategoryContainer___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (ServantFilterCategoryContainer___c_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)x,
                                                         0LL)) == 0LL )
  {
    sub_B2C434(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
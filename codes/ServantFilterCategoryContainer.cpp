void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4353BED & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
    sub_B70694(&ServantFilterCategoryContainer_TypeInfo);
    sub_B70694(&StringLiteral_11995/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/);
    sub_B70694(&StringLiteral_11982/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/);
    sub_B70694(&StringLiteral_11991/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/);
    sub_B70694(&StringLiteral_11984/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/);
    sub_B70694(&StringLiteral_11994/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/);
    sub_B70694(&StringLiteral_11988/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/);
    sub_B70694(&StringLiteral_11987/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/);
    sub_B70694(&StringLiteral_11985/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/);
    sub_B70694(&StringLiteral_11981/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/);
    sub_B70694(&StringLiteral_11993/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/);
    sub_B70694(&StringLiteral_11986/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/);
    sub_B70694(&StringLiteral_10605/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    sub_B70694(&StringLiteral_11983/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/);
    sub_B70694(&StringLiteral_11989/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/);
    sub_B70694(&StringLiteral_11990/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/);
    sub_B70694(&StringLiteral_11966/*"SERVANT_SORT_EXPLANATION2"*/);
    sub_B70694(&StringLiteral_11992/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/);
    byte_4353BED = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v1 )
    sub_B7076C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_11966/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_10605/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_11982/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_11981/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_11981/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_11981/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_11987/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_11986/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_11994/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_11989/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_11984/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_11984/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_11990/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_11993/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_11991/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_11992/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_11988/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_11983/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_11985/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_11995/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.LINE_SPRITE_DIFF_Y = 0x3FC0000042880000LL;
  *(_OWORD *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y = xmmword_32ECE40;
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
  UnityEngine_Object_o *widget; // x23
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *ChildList; // x0
  __int64 v11; // x1
  float cellWidth; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float v14; // s8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v15; // x22
  ServantFilterCategoryContainer___c_c *v16; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__22_0; // x23
  Il2CppObject *v19; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t v27; // w22
  float v28; // s11
  float v29; // s0
  int32_t v30; // w0
  int32_t v31; // w21
  int32_t v32; // w22
  struct UISprite_o **p_lineSprite; // x23
  int32_t categoryKind; // w20
  float v35; // s9
  UnityEngine_GameObject_o *v36; // x0
  UIWidget_o *v37; // x20
  int32_t v38; // w0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353BEB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Transform__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_Transform___ctor__);
    sub_B70694(&System_Predicate_Transform__TypeInfo);
    sub_B70694(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__);
    sub_B70694(&ServantFilterCategoryContainer___c_TypeInfo);
    byte_4353BEB = 1;
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
        v14 = *(float *)&gridLayout->fields.animateSmoothly;
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UIGrid__GetChildList(gridLayout, 0LL);
        v15 = ChildList;
        v16 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( (BYTE3(ServantFilterCategoryContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
          v16 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        static_fields = v16->static_fields;
        _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          }
          v19 = (Il2CppObject *)static_fields->__9;
          _9__22_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_Transform__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__22_0,
            v19,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_Transform___ctor__);
          v20 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          v20->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v20->__9__22_0,
            (System_Int32_array **)_9__22_0,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        if ( !v15
          || (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(v15, (System_Predicate_T__o *)_9__22_0, (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_Transform__FindAll__)) == 0LL
          || (v27 = UnityEngine_Mathf__CeilToInt(
                      (float)ChildList->fields._size / (float)SLODWORD(gridLayout->fields.cellWidth),
                      0LL),
              (ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL)) == 0LL) )
        {
LABEL_44:
          sub_B7076C(ChildList, v11);
        }
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v28 = fabsf(localPosition.fields.y);
        v29 = UnityEngine_Mathf__Max(0.0, (float)v27 + -1.0, 0LL);
        v30 = UnityEngine_Mathf__CeilToInt(
                -(float)(*(float *)&this->fields.WIDGET_HEIGHT_DIFF
                       + (float)((float)((float)(v14 * 0.5) + v28)
                               + (float)(v29 * *(float *)&gridLayout->fields.animateSmoothly))),
                0LL);
        if ( *(&this->fields.categoryKind + 1) == 19 )
          v31 = v30 - 3;
        else
          v31 = v30;
        v32 = UnityEngine_Mathf__Abs_41127592(v31, 0LL);
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
          v35 = (float)(categoryKind + v32);
        }
        else
        {
          p_lineSprite = &this->fields.lineSprite;
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_44;
          v35 = (float)((float)((float)SHIDWORD(ChildList[4].klass) * 0.5) + (float)v32)
              + (float)this->fields.categoryKind;
        }
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v36, (float)v31, 0LL);
        v37 = this->fields.widget;
        v38 = UnityEngine_Mathf__CeilToInt(v35, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)UnityEngine_Mathf__Abs_41127592(v38, 0LL);
        if ( !v37 )
          goto LABEL_44;
        UIWidget__set_height(v37, (int32_t)ChildList, 0LL);
        ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)this->fields.widget;
        if ( !ChildList )
          goto LABEL_44;
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(*(&this->fields.categoryKind + 1) - 16) <= 2 )
        {
          ChildList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)*p_lineSprite;
          if ( *p_lineSprite )
          {
            v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v39, (float)v31 + -1.0, 0LL);
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
  int v5; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v7; // x1
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v10; // x21
  ServantFilterCategoryContainer_c *v11; // x0
  System_String_o *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v14; // x21
  const MethodInfo *v15; // x4
  UnityEngine_Object_o *grid2; // x21
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4353BEA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantFilterCategoryContainer_TypeInfo);
    byte_4353BEA = 1;
  }
  v5 = *(&this->fields.categoryKind + 1);
  if ( (unsigned int)(v5 - 998) < 2 || v5 == 11 )
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
      sub_B7076C(CategoryTitleLocalizationKeyDic, v7);
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
      v10 = this->fields.titleLabal;
      v11 = ServantFilterCategoryContainer_TypeInfo;
      if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v11 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v11->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_43;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)CategoryTitleLocalizationKeyDic,
               *(&this->fields.categoryKind + 1),
               (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get(Item, 0LL);
      if ( !v10 )
        goto LABEL_43;
      UILabel__set_text(v10, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v14 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v15);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v18);
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
    sub_B7076C(0LL, v5);
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
  UILabel_o *titleLabal; // x24
  ServantFilterCategoryContainer_c *v12; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *CategoryTitleLocalizationKeyDic; // x0
  System_String_o *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_4353BEC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantFilterCategoryContainer_TypeInfo);
    byte_4353BEC = 1;
  }
  titleLabal = this->fields.titleLabal;
  v12 = ServantFilterCategoryContainer_TypeInfo;
  if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
    v12 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v12->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           CategoryTitleLocalizationKeyDic,
           *(&this->fields.categoryKind + 1),
           (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
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
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v17, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_24;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v18, (float)position3, 0LL);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B7076C(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
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
    sub_B7076C(widget, method);
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
  Il2CppObject *v1; // x19
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0

  if ( (byte_434F238 & 1) == 0 )
  {
    sub_B70694(&ServantFilterCategoryContainer___c_TypeInfo);
    byte_434F238 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantFilterCategoryContainer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
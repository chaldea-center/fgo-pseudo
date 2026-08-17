void ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B1FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
    sub_2213A60(&ServantFilterCategoryContainer_TypeInfo);
    sub_2213A60(&StringLiteral_12267/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/);
    sub_2213A60(&StringLiteral_12251/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_ATTRI_SECOND"*/);
    sub_2213A60(&StringLiteral_12253/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/);
    sub_2213A60(&StringLiteral_12262/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/);
    sub_2213A60(&StringLiteral_12255/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/);
    sub_2213A60(&StringLiteral_12265/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/);
    sub_2213A60(&StringLiteral_12259/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/);
    sub_2213A60(&StringLiteral_12258/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/);
    sub_2213A60(&StringLiteral_12250/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_ATTRI_FIRST"*/);
    sub_2213A60(&StringLiteral_12256/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/);
    sub_2213A60(&StringLiteral_12252/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/);
    sub_2213A60(&StringLiteral_12264/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/);
    sub_2213A60(&StringLiteral_12257/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/);
    sub_2213A60(&StringLiteral_10844/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12266/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUB_ATTRI"*/);
    sub_2213A60(&StringLiteral_12254/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/);
    sub_2213A60(&StringLiteral_12260/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/);
    sub_2213A60(&StringLiteral_12261/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/);
    sub_2213A60(&StringLiteral_12233/*"SERVANT_SORT_EXPLANATION2"*/);
    sub_2213A60(&StringLiteral_12263/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/);
    byte_596B1FF = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_12233/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_10844/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_12253/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_12252/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_12252/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_12252/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_12258/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_12257/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_12265/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_12260/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_12255/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_12255/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_12261/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_12264/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_12262/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_12263/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_12259/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_12254/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_12256/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_12267/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_12250/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_ATTRI_FIRST"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12251/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_ATTRI_SECOND"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_12266/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUB_ATTRI"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  ServantFilterCategoryContainer_TypeInfo->static_fields->CategoryTitleLocalizationKeyDic = (struct System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantFilterCategoryContainer_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  this->fields.GRID_COLUMN_5_GRID_SCALE.fields.z = 1.0;
  this->fields.GRID_COLUMN_5_GRID_CELL_SIZE = (struct UnityEngine_Vector2_o)0x42880000431E0000LL;
  *(int32x2_t *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.x = vdup_n_s32(0x3F733333u);
  this->fields.LINE_SPRITE_DIFF_Y = 1.5;
  *(_QWORD *)&this->fields.WIDGET_HEIGHT_DIFF = 0x3E700000005LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantFilterCategoryContainer__GridLayout(
        ServantFilterCategoryContainer_o *this,
        UIGrid_o *gridLayout,
        UIGrid_o *gridGet,
        bool isLast,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *widget; // x23
  System_Collections_Generic_List_object__o *ChildList; // x0
  __int64 v13; // x1
  int32_t maxPerLine; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float cellHeight; // s8
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x22
  ServantFilterCategoryContainer___c_c *v19; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__22_0; // x23
  Il2CppObject *v22; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x2
  int size; // s9
  int32_t v32; // s10
  float v33; // s9
  __int64 v34; // x2
  float v35; // s1
  float v36; // s0
  float v37; // s8
  float v38; // s8
  unsigned int v39; // w9
  int v40; // w24
  int v41; // w20
  int32_t WIDGET_HEIGHT_DIFF; // w25
  float v43; // s9
  int v44; // w8
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x2
  UIWidget_o *v47; // x20
  unsigned int v48; // w9
  int v49; // w23
  int32_t v50; // w1
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B1FD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_Transform__TypeInfo);
    sub_2213A60(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__);
    sub_2213A60(&ServantFilterCategoryContainer___c_TypeInfo);
    byte_596B1FD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gridLayout, gridGet);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gridLayout, 0, 0) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    ChildList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(widget, 0, 0);
    if ( ((unsigned __int8)ChildList & 1) != 0 )
    {
      if ( !gridGet )
        goto LABEL_83;
      maxPerLine = gridGet->fields.maxPerLine;
      if ( maxPerLine <= 5 )
      {
        if ( maxPerLine == 5 )
        {
          if ( !gridLayout )
            goto LABEL_83;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gridLayout, 0);
          GameObjectExtensions__SetLocalScale(gameObject, this->fields.GRID_COLUMN_5_GRID_SCALE, 0);
          *(struct UnityEngine_Vector2_o *)&gridLayout->fields.cellWidth = this->fields.GRID_COLUMN_5_GRID_CELL_SIZE;
        }
        else if ( !gridLayout )
        {
          goto LABEL_83;
        }
        ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))gridLayout->klass->vtable._8_Reposition.methodPtr)(
          gridLayout,
          gridLayout->klass->vtable._8_Reposition.method);
        cellHeight = gridLayout->fields.cellHeight;
        ChildList = (System_Collections_Generic_List_object__o *)UIGrid__GetChildList(gridLayout, 0);
        v18 = ChildList;
        v19 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( !*(&ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo, v13, v17);
          v19 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        static_fields = v19->static_fields;
        _9__22_0 = (System_Predicate_object__o *)static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( !*(&v19->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v19, v13, v17);
            static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          }
          v22 = (Il2CppObject *)static_fields->__9;
          _9__22_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_Transform__TypeInfo);
          System_Predicate_object____ctor(
            _9__22_0,
            v22,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            0);
          v23 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          v23->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v23->__9__22_0,
            (int32_t)_9__22_0,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        if ( !v18 )
          goto LABEL_83;
        ChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                   v18,
                                                                   (System_Predicate_T__o *)_9__22_0,
                                                                   (const MethodInfo_448436C *)Method_System_Collections_Generic_List_Transform__FindAll__);
        if ( !ChildList )
          goto LABEL_83;
        size = ChildList->fields._size;
        v32 = gridLayout->fields.maxPerLine;
        if ( !byte_596A15B )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A15B = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v30);
        ChildList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)gridLayout,
                                                                   0);
        if ( !ChildList )
LABEL_83:
          sub_2213CDC(ChildList, v13);
        v33 = ceilf((float)size / (float)v32);
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0);
        v35 = fabsf(localPosition.fields.y);
        if ( v33 == INFINITY )
          v36 = -2147500000.0;
        else
          v36 = (float)(int)v33 + -1.0;
        if ( v36 < 0.0 )
          v36 = 0.0;
        v37 = this->fields.LINE_SPRITE_DIFF_Y
            + (float)((float)(v36 * gridLayout->fields.cellHeight) + (float)((float)(cellHeight * 0.5) + v35));
        if ( !byte_596A15B )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A15B = 1;
        }
        v38 = -v37;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v34);
        v39 = vcvtps_s32_f32(v38);
        if ( ceilf(v38) == INFINITY )
          v39 = 0x80000000;
        if ( this->fields.categoryKind == 19 )
          v40 = v39 - 3;
        else
          v40 = v39;
        if ( isLast )
        {
          if ( !byte_596AEF6 )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596AEF6 = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v34);
          ChildList = (System_Collections_Generic_List_object__o *)this->fields.lineSprite;
          if ( v40 >= 0 )
            v41 = v40;
          else
            v41 = -v40;
          if ( !ChildList )
            goto LABEL_83;
          WIDGET_HEIGHT_DIFF = this->fields.WIDGET_HEIGHT_DIFF;
          ChildList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)ChildList,
                                                                     0);
          if ( !ChildList )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ChildList, 0, 0);
          ChildList = (System_Collections_Generic_List_object__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_83;
          v43 = (float)(WIDGET_HEIGHT_DIFF + v41);
        }
        else
        {
          if ( !byte_596AEF6 )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596AEF6 = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v34);
          ChildList = (System_Collections_Generic_List_object__o *)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_83;
          if ( v40 >= 0 )
            v44 = v40;
          else
            v44 = -v40;
          v43 = (float)((float)((float)SHIDWORD(ChildList[4].monitor) * 0.5) + (float)v44)
              + (float)this->fields.WIDGET_HEIGHT_DIFF;
        }
        v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0);
        GameObjectExtensions__SetLocalPositionY(v45, (float)v40, 0);
        v47 = this->fields.widget;
        if ( !byte_596A15B )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A15B = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v46);
        v48 = vcvtps_s32_f32(v43);
        if ( ceilf(v43) == INFINITY )
          v49 = 0x80000000;
        else
          v49 = v48;
        if ( !byte_596AEF6 )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596AEF6 = 1;
        }
        ChildList = (System_Collections_Generic_List_object__o *)System_Math_TypeInfo;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v46);
        if ( !v47 )
          goto LABEL_83;
        v50 = v49 >= 0 ? v49 : -v49;
        UIWidget__set_height(v47, v50, 0);
        ChildList = (System_Collections_Generic_List_object__o *)this->fields.widget;
        if ( !ChildList )
          goto LABEL_83;
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0);
        if ( (unsigned int)(this->fields.categoryKind - 16) <= 2 )
        {
          ChildList = (System_Collections_Generic_List_object__o *)this->fields.lineSprite;
          if ( ChildList )
          {
            v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0);
            GameObjectExtensions__SetLocalPositionY(v51, (float)v40 + -1.0, 0);
            return;
          }
          goto LABEL_83;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterCategoryContainer__Layout(
        ServantFilterCategoryContainer_o *this,
        bool isLast,
        const MethodInfo *method)
{
  int32_t categoryKind; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v7; // x1
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  __int64 v10; // x2
  UILabel_o *v11; // x21
  ServantFilterCategoryContainer_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Item; // x22
  UnityEngine_Object_o *grid; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x4
  UnityEngine_Object_o *grid2; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x4

  if ( (byte_596B1FC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantFilterCategoryContainer_TypeInfo);
    byte_596B1FC = 1;
  }
  categoryKind = this->fields.categoryKind;
  if ( (unsigned int)(categoryKind - 998) < 2 || categoryKind == 11 )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLast, method);
    if ( UnityEngine_Object__op_Inequality(widget, 0, 0) )
    {
      CategoryTitleLocalizationKeyDic = this->fields.widget;
      if ( CategoryTitleLocalizationKeyDic )
      {
        UIWidget__ResizeCollider(CategoryTitleLocalizationKeyDic, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(CategoryTitleLocalizationKeyDic, v7);
    }
  }
  else
  {
    titleLabal = (UnityEngine_Object_o *)this->fields.titleLabal;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLast, method);
    if ( UnityEngine_Object__op_Inequality(titleLabal, 0, 0) )
    {
      v11 = this->fields.titleLabal;
      v12 = ServantFilterCategoryContainer_TypeInfo;
      if ( !*(&ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo, v7, v10);
        v12 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v12->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_35;
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)CategoryTitleLocalizationKeyDic,
               this->fields.categoryKind,
               (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get((System_String_o *)Item, 0);
      if ( !v11 )
        goto LABEL_35;
      UILabel__set_text(v11, (System_String_o *)CategoryTitleLocalizationKeyDic, 0);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v10);
    if ( UnityEngine_Object__op_Inequality(grid, 0, 0) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v20);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality(grid2, 0, 0) )
    {
      v24 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v25);
    }
  }
}


void ServantFilterCategoryContainer__SetActive(
        ServantFilterCategoryContainer_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterCategoryContainer__SetOldFilterLayout(
        ServantFilterCategoryContainer_o *this,
        int32_t position1,
        int32_t position2,
        int32_t position3,
        bool isDispLineSprite,
        const MethodInfo *method)
{
  ServantFilterCategoryContainer_c *v11; // x0
  UILabel_o *titleLabal; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *CategoryTitleLocalizationKeyDic; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_596B1FE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantFilterCategoryContainer_TypeInfo);
    byte_596B1FE = 1;
  }
  v11 = ServantFilterCategoryContainer_TypeInfo;
  titleLabal = this->fields.titleLabal;
  if ( !*(&ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo, *(_QWORD *)&position1, *(_QWORD *)&position2);
    v11 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v11->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
           CategoryTitleLocalizationKeyDic,
           this->fields.categoryKind,
           (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)LocalizationManager__Get(
                                                                                               (System_String_o *)Item,
                                                                                               0);
  if ( !titleLabal )
    goto LABEL_21;
  UILabel__set_text(titleLabal, (System_String_o *)CategoryTitleLocalizationKeyDic, 0);
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.titleLabal;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)position1, 0);
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(grid, 0, 0) )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.grid;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0);
    GameObjectExtensions__SetLocalPositionY(v21, (float)position2, 0);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0);
    GameObjectExtensions__SetLocalPositionY(v22, (float)position3, 0);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic,
                                                                                                     0)) == 0 )
  {
LABEL_21:
    sub_2213CDC(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CategoryTitleLocalizationKeyDic, isDispLineSprite, 0);
}


void ServantFilterCategoryContainer__SetPosition(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v7, 0);
}


UnityEngine_Vector3_o ServantFilterCategoryContainer__get_BottomPosition(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *widget; // x0
  struct UIWidget_o *v4; // x8
  float v5; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  widget = (UnityEngine_Component_o *)this->fields.widget;
  if ( !widget
    || (widget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(widget, 0)) == 0
    || (result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)widget, 0),
        (v4 = this->fields.widget) == 0) )
  {
    sub_2213CDC(widget, method);
  }
  v5 = result.fields.y - (float)v4->fields.mHeight;
  result.fields.y = v5;
  return result;
}


int32_t ServantFilterCategoryContainer__get_CategoryKind(
        ServantFilterCategoryContainer_o *this,
        const MethodInfo *method)
{
  return this->fields.categoryKind;
}


UIGrid_o *ServantFilterCategoryContainer__get_Grid(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  return this->fields.grid;
}


UIGrid_o *ServantFilterCategoryContainer__get_Grid2(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  return this->fields.grid2;
}


void ServantFilterCategoryContainer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B200 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterCategoryContainer___c_TypeInfo);
    byte_596B200 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantFilterCategoryContainer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterCategoryContainer___c_TypeInfo->static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantFilterCategoryContainer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantFilterCategoryContainer___c___ctor(ServantFilterCategoryContainer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantFilterCategoryContainer___c___GridLayout_b__22_0(
        ServantFilterCategoryContainer___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (ServantFilterCategoryContainer___c_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)x,
                                                         0)) == 0 )
  {
    sub_2213CDC(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
}
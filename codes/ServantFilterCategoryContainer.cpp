void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v44; // x19
  __int64 v45; // x0
  __int64 v46; // x1

  if ( (byte_4B119B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantFilterCategoryContainer_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_11859/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11846/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11855/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11848/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11858/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11852/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11851/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11845/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_11857/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11850/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_10544/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11847/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11853/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_11854/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11830/*"SERVANT_SORT_EXPLANATION2"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_11856/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/, v42, v43);
    byte_4B119B2 = 1;
  }
  v44 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v44,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v44 )
    sub_1BCAA3C(v45, v46);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    9,
    (Il2CppObject *)StringLiteral_11830/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    10,
    (Il2CppObject *)StringLiteral_10544/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    13,
    (Il2CppObject *)StringLiteral_11846/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    0,
    (Il2CppObject *)StringLiteral_11845/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    14,
    (Il2CppObject *)StringLiteral_11845/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    15,
    (Il2CppObject *)StringLiteral_11845/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    1,
    (Il2CppObject *)StringLiteral_11851/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    2,
    (Il2CppObject *)StringLiteral_11850/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    3,
    (Il2CppObject *)StringLiteral_11858/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    4,
    (Il2CppObject *)StringLiteral_11853/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    5,
    (Il2CppObject *)StringLiteral_11848/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    6,
    (Il2CppObject *)StringLiteral_11848/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    8,
    (Il2CppObject *)StringLiteral_11854/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    12,
    (Il2CppObject *)StringLiteral_11857/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    19,
    (Il2CppObject *)StringLiteral_11855/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    20,
    (Il2CppObject *)StringLiteral_11856/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    7,
    (Il2CppObject *)StringLiteral_11852/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    16,
    (Il2CppObject *)StringLiteral_11847/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    17,
    (Il2CppObject *)StringLiteral_11849/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    18,
    (Il2CppObject *)StringLiteral_11859/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  ServantFilterCategoryContainer_TypeInfo->static_fields->CategoryTitleLocalizationKeyDic = (struct System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__o *)v44;
  sub_1BCA784(ServantFilterCategoryContainer_TypeInfo->static_fields, v44);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  this->fields.GRID_COLUMN_5_GRID_CELL_SIZE = (struct UnityEngine_Vector2_o)0x42880000431E0000LL;
  this->fields.GRID_COLUMN_5_GRID_SCALE.fields.z = 1.0;
  *(int32x2_t *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.x = vdup_n_s32(0x3F733333u);
  this->fields.LINE_SPRITE_DIFF_Y = 1.5;
  *(_QWORD *)&this->fields.WIDGET_HEIGHT_DIFF = 0x3E700000005LL;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UnityEngine_Object_o *widget; // x23
  __int64 ChildList; // x0
  __int64 v22; // x1
  int32_t maxPerLine; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float cellHeight; // s8
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x22
  ServantFilterCategoryContainer___c_c *v29; // x8
  System_Predicate_object__o *_9__22_0; // x23
  Il2CppObject *v31; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0
  __int64 v33; // x2
  int v34; // s9
  int32_t v35; // s10
  float v36; // s9
  __int64 v37; // x2
  float v38; // s0
  float v39; // s1
  float v40; // s8
  float v41; // s8
  unsigned int v42; // w8
  int v43; // w24
  int v44; // w25
  int32_t WIDGET_HEIGHT_DIFF; // w20
  float v46; // s9
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x2
  UIWidget_o *v49; // x20
  unsigned int v50; // w10
  int v51; // w23
  int32_t v52; // w1
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B119B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__FindAll__, gridLayout, gridGet);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__get_Count__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Predicate_Transform__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__, v15, v16);
    sub_1BCA7E0(&ServantFilterCategoryContainer___c_TypeInfo, v17, v18);
    byte_4B119B0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gridLayout);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gridLayout, 0LL, 0LL) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    ChildList = UnityEngine_Object__op_Inequality(widget, 0LL, 0LL);
    if ( (ChildList & 1) != 0 )
    {
      if ( !gridGet )
        goto LABEL_73;
      maxPerLine = gridGet->fields.maxPerLine;
      if ( maxPerLine <= 5 )
      {
        if ( maxPerLine == 5 )
        {
          if ( !gridLayout )
            goto LABEL_73;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gridLayout, 0LL);
          GameObjectExtensions__SetLocalScale(gameObject, this->fields.GRID_COLUMN_5_GRID_SCALE, 0LL);
          *(struct UnityEngine_Vector2_o *)&gridLayout->fields.cellWidth = this->fields.GRID_COLUMN_5_GRID_CELL_SIZE;
        }
        else if ( !gridLayout )
        {
          goto LABEL_73;
        }
        ((void (__fastcall *)(UIGrid_o *, Il2CppMethodPointer))gridLayout->klass->vtable._8_Reposition.method)(
          gridLayout,
          gridLayout->klass->vtable._9_ResetPosition.methodPtr);
        cellHeight = gridLayout->fields.cellHeight;
        ChildList = (__int64)UIGrid__GetChildList(gridLayout, 0LL);
        v28 = (System_Collections_Generic_List_object__o *)ChildList;
        v29 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo, v22);
          v29 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        _9__22_0 = (System_Predicate_object__o *)v29->static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29, v22);
            v29 = ServantFilterCategoryContainer___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__22_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_Transform__TypeInfo, v22, v26, v27);
          System_Predicate_object____ctor(
            _9__22_0,
            v31,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            0LL);
          static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          static_fields->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          ChildList = sub_1BCA784(&static_fields->__9__22_0, _9__22_0);
        }
        if ( !v28 )
          goto LABEL_73;
        ChildList = (__int64)System_Collections_Generic_List_object___FindAll(
                               v28,
                               (System_Predicate_T__o *)_9__22_0,
                               (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_Transform__FindAll__);
        if ( !ChildList )
          goto LABEL_73;
        v34 = *(_DWORD *)(ChildList + 24);
        v35 = gridLayout->fields.maxPerLine;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v22, v33);
          byte_4B1103A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        ChildList = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL);
        if ( !ChildList )
          goto LABEL_73;
        v36 = ceilf((float)v34 / (float)v35);
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v38 = fabsf(localPosition.fields.y);
        v39 = (float)(int)v36 + -1.0;
        if ( v36 == INFINITY )
          v39 = -2147500000.0;
        v40 = this->fields.LINE_SPRITE_DIFF_Y
            + (float)((float)(fmaxf(v39, 0.0) * gridLayout->fields.cellHeight) + (float)((float)(cellHeight * 0.5) + v38));
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v22, v37);
          byte_4B1103A = 1;
        }
        v41 = -v40;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        v42 = vcvtps_s32_f32(v41);
        if ( ceilf(v41) == INFINITY )
          v42 = 0x80000000;
        if ( this->fields.categoryKind == 19 )
          v43 = v42 - 3;
        else
          v43 = v42;
        if ( !byte_4B11A22 )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v22, v37);
          byte_4B11A22 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        v44 = v43 >= 0 ? v43 : -v43;
        if ( isLast )
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_73;
          WIDGET_HEIGHT_DIFF = this->fields.WIDGET_HEIGHT_DIFF;
          ChildList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
          if ( !ChildList )
            goto LABEL_73;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ChildList, 0, 0LL);
          ChildList = (__int64)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_73;
          v46 = (float)(WIDGET_HEIGHT_DIFF + v44);
        }
        else
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_73;
          v46 = (float)((float)((float)*(int *)(ChildList + 172) * 0.5) + (float)v44)
              + (float)this->fields.WIDGET_HEIGHT_DIFF;
        }
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v47, (float)v43, 0LL);
        v49 = this->fields.widget;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v22, v48);
          byte_4B1103A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        v50 = vcvtps_s32_f32(v46);
        if ( ceilf(v46) == INFINITY )
          v51 = 0x80000000;
        else
          v51 = v50;
        if ( !byte_4B11A22 )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v22, v48);
          byte_4B11A22 = 1;
        }
        ChildList = (__int64)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
        if ( !v49
          || (v51 >= 0 ? (v52 = v51) : (v52 = -v51),
              UIWidget__set_height(v49, v52, 0LL),
              (ChildList = (__int64)this->fields.widget) == 0) )
        {
LABEL_73:
          sub_1BCAA3C(ChildList, v22);
        }
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(this->fields.categoryKind - 16) <= 2 )
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( ChildList )
          {
            v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v53, (float)v43 + -1.0, 0LL);
            return;
          }
          goto LABEL_73;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t categoryKind; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v13; // x1
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v16; // x21
  ServantFilterCategoryContainer_c *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Item; // x22
  UnityEngine_Object_o *grid; // x21
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x21
  const MethodInfo *v23; // x4
  UnityEngine_Object_o *grid2; // x21
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x21
  const MethodInfo *v27; // x4

  if ( (byte_4B119AF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast,
      method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantFilterCategoryContainer_TypeInfo, v9, v10);
    byte_4B119AF = 1;
  }
  categoryKind = this->fields.categoryKind;
  if ( (unsigned int)(categoryKind - 998) < 2 || categoryKind == 11 )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLast);
    if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
    {
      CategoryTitleLocalizationKeyDic = this->fields.widget;
      if ( CategoryTitleLocalizationKeyDic )
      {
        UIWidget__ResizeCollider(CategoryTitleLocalizationKeyDic, 0LL);
        return;
      }
LABEL_35:
      sub_1BCAA3C(CategoryTitleLocalizationKeyDic, v13);
    }
  }
  else
  {
    titleLabal = (UnityEngine_Object_o *)this->fields.titleLabal;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLast);
    if ( UnityEngine_Object__op_Inequality(titleLabal, 0LL, 0LL) )
    {
      v16 = this->fields.titleLabal;
      v17 = ServantFilterCategoryContainer_TypeInfo;
      if ( !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo, v13);
        v17 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v17->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_35;
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)CategoryTitleLocalizationKeyDic,
               this->fields.categoryKind,
               (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get((System_String_o *)Item, 0LL);
      if ( !v16 )
        goto LABEL_35;
      UILabel__set_text(v16, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v22 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v23);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v27);
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
    sub_1BCAA3C(0LL, v5);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ServantFilterCategoryContainer_c *v17; // x0
  UILabel_o *titleLabal; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *CategoryTitleLocalizationKeyDic; // x0
  __int64 v20; // x1
  Il2CppObject *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_4B119B1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1,
      *(_QWORD *)&position2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantFilterCategoryContainer_TypeInfo, v15, v16);
    byte_4B119B1 = 1;
  }
  v17 = ServantFilterCategoryContainer_TypeInfo;
  titleLabal = this->fields.titleLabal;
  if ( !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo, *(_QWORD *)&position1);
    v17 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
           CategoryTitleLocalizationKeyDic,
           this->fields.categoryKind,
           (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)LocalizationManager__Get(
                                                                                               (System_String_o *)Item,
                                                                                               0LL);
  if ( !titleLabal )
    goto LABEL_21;
  UILabel__set_text(titleLabal, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.titleLabal;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)position1, 0LL);
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.grid;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v25, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v26, (float)position3, 0LL);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic,
                                                                                                     0LL)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
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
    sub_1BCAA3C(widget, method);
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
  return this->fields.categoryKind;
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B119B3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterCategoryContainer___c_TypeInfo, v1, v2);
    byte_4B119B3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantFilterCategoryContainer___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantFilterCategoryContainer___c_TypeInfo->static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v4;
  sub_1BCA784(ServantFilterCategoryContainer___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
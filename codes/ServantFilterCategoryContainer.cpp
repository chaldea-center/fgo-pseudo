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
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_4A03F68 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v2);
    sub_1B686D4(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v3);
    sub_1B686D4(&ServantFilterCategoryContainer_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_11671/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v5);
    sub_1B686D4(&StringLiteral_11658/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v6);
    sub_1B686D4(&StringLiteral_11667/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/, v7);
    sub_1B686D4(&StringLiteral_11660/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v8);
    sub_1B686D4(&StringLiteral_11670/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v9);
    sub_1B686D4(&StringLiteral_11664/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v10);
    sub_1B686D4(&StringLiteral_11663/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v11);
    sub_1B686D4(&StringLiteral_11661/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v12);
    sub_1B686D4(&StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v13);
    sub_1B686D4(&StringLiteral_11669/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v14);
    sub_1B686D4(&StringLiteral_11662/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v15);
    sub_1B686D4(&StringLiteral_10365/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    sub_1B686D4(&StringLiteral_11659/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v17);
    sub_1B686D4(&StringLiteral_11665/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v18);
    sub_1B686D4(&StringLiteral_11666/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v19);
    sub_1B686D4(&StringLiteral_11642/*"SERVANT_SORT_EXPLANATION2"*/, v20);
    sub_1B686D4(&StringLiteral_11668/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/, v21);
    byte_4A03F68 = 1;
  }
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v22,
    (const MethodInfo_31625DC *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v22 )
    sub_1B68930(v23, v24);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    9,
    (Il2CppObject *)StringLiteral_11642/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    10,
    (Il2CppObject *)StringLiteral_10365/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    13,
    (Il2CppObject *)StringLiteral_11658/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    0,
    (Il2CppObject *)StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    14,
    (Il2CppObject *)StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    15,
    (Il2CppObject *)StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    1,
    (Il2CppObject *)StringLiteral_11663/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    2,
    (Il2CppObject *)StringLiteral_11662/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    3,
    (Il2CppObject *)StringLiteral_11670/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    4,
    (Il2CppObject *)StringLiteral_11665/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    5,
    (Il2CppObject *)StringLiteral_11660/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    6,
    (Il2CppObject *)StringLiteral_11660/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    8,
    (Il2CppObject *)StringLiteral_11666/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    12,
    (Il2CppObject *)StringLiteral_11669/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    19,
    (Il2CppObject *)StringLiteral_11667/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    20,
    (Il2CppObject *)StringLiteral_11668/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    7,
    (Il2CppObject *)StringLiteral_11664/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    16,
    (Il2CppObject *)StringLiteral_11659/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    17,
    (Il2CppObject *)StringLiteral_11661/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    18,
    (Il2CppObject *)StringLiteral_11671/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  ServantFilterCategoryContainer_TypeInfo->static_fields->CategoryTitleLocalizationKeyDic = (struct System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__o *)v22;
  sub_1B68678(ServantFilterCategoryContainer_TypeInfo->static_fields);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *widget; // x23
  __int64 ChildList; // x0
  __int64 v16; // x1
  int32_t maxPerLine; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float cellHeight; // s8
  System_Collections_Generic_List_object__o *v20; // x22
  ServantFilterCategoryContainer___c_c *v21; // x8
  System_Predicate_object__o *_9__22_0; // x23
  Il2CppObject *v23; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0
  int v25; // s9
  int32_t v26; // s10
  float v27; // s9
  float v28; // s0
  float v29; // s1
  float v30; // s8
  float v31; // s8
  unsigned int v32; // w8
  int v33; // w24
  int v34; // w25
  int32_t WIDGET_HEIGHT_DIFF; // w20
  float v36; // s9
  UnityEngine_GameObject_o *v37; // x0
  UIWidget_o *v38; // x20
  unsigned int v39; // w10
  int v40; // w23
  int32_t v41; // w1
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A03F66 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Transform__FindAll__, gridLayout);
    sub_1B686D4(&Method_System_Collections_Generic_List_Transform__get_Count__, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&System_Predicate_Transform__TypeInfo, v11);
    sub_1B686D4(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__, v12);
    sub_1B686D4(&ServantFilterCategoryContainer___c_TypeInfo, v13);
    byte_4A03F66 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gridLayout, 0LL, 0LL) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v20 = (System_Collections_Generic_List_object__o *)ChildList;
        v21 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          ChildList = j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
          v21 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        _9__22_0 = (System_Predicate_object__o *)v21->static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( !v21->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v21);
            v21 = ServantFilterCategoryContainer___c_TypeInfo;
          }
          v23 = (Il2CppObject *)v21->static_fields->__9;
          _9__22_0 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_Transform__TypeInfo);
          System_Predicate_object____ctor(
            _9__22_0,
            v23,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            0LL);
          static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          static_fields->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          ChildList = sub_1B68678(&static_fields->__9__22_0);
        }
        if ( !v20 )
          goto LABEL_73;
        ChildList = (__int64)System_Collections_Generic_List_object___FindAll(
                               v20,
                               (System_Predicate_T__o *)_9__22_0,
                               (const MethodInfo_34BC988 *)Method_System_Collections_Generic_List_Transform__FindAll__);
        if ( !ChildList )
          goto LABEL_73;
        v25 = *(_DWORD *)(ChildList + 24);
        v26 = gridLayout->fields.maxPerLine;
        if ( !byte_4A03F8D )
        {
          sub_1B686D4(&System_Math_TypeInfo, v16);
          byte_4A03F8D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        ChildList = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL);
        if ( !ChildList )
          goto LABEL_73;
        v27 = ceilf((float)v25 / (float)v26);
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v28 = fabsf(localPosition.fields.y);
        v29 = (float)(int)v27 + -1.0;
        if ( v27 == INFINITY )
          v29 = -2147500000.0;
        v30 = this->fields.LINE_SPRITE_DIFF_Y
            + (float)((float)(fmaxf(v29, 0.0) * gridLayout->fields.cellHeight) + (float)((float)(cellHeight * 0.5) + v28));
        if ( !byte_4A03F8D )
        {
          sub_1B686D4(&System_Math_TypeInfo, v16);
          byte_4A03F8D = 1;
        }
        v31 = -v30;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v32 = vcvtps_s32_f32(v31);
        if ( ceilf(v31) == INFINITY )
          v32 = 0x80000000;
        if ( this->fields.categoryKind == 19 )
          v33 = v32 - 3;
        else
          v33 = v32;
        if ( !byte_4A03F8E )
        {
          sub_1B686D4(&System_Math_TypeInfo, v16);
          byte_4A03F8E = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v34 = v33 >= 0 ? v33 : -v33;
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
          v36 = (float)(WIDGET_HEIGHT_DIFF + v34);
        }
        else
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_73;
          v36 = (float)((float)((float)*(int *)(ChildList + 172) * 0.5) + (float)v34)
              + (float)this->fields.WIDGET_HEIGHT_DIFF;
        }
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v37, (float)v33, 0LL);
        v38 = this->fields.widget;
        if ( !byte_4A03F8D )
        {
          sub_1B686D4(&System_Math_TypeInfo, v16);
          byte_4A03F8D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v39 = vcvtps_s32_f32(v36);
        if ( ceilf(v36) == INFINITY )
          v40 = 0x80000000;
        else
          v40 = v39;
        if ( !byte_4A03F8E )
        {
          sub_1B686D4(&System_Math_TypeInfo, v16);
          byte_4A03F8E = 1;
        }
        ChildList = (__int64)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          ChildList = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( !v38
          || (v40 >= 0 ? (v41 = v40) : (v41 = -v40),
              UIWidget__set_height(v38, v41, 0LL),
              (ChildList = (__int64)this->fields.widget) == 0) )
        {
LABEL_73:
          sub_1B68930(ChildList, v16);
        }
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(this->fields.categoryKind - 16) <= 2 )
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( ChildList )
          {
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v42, (float)v33 + -1.0, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t categoryKind; // w8
  UnityEngine_Object_o *widget; // x20
  __int64 v10; // x1
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v13; // x21
  ServantFilterCategoryContainer_c *v14; // x0
  Il2CppObject *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x4
  UnityEngine_Object_o *grid2; // x21
  UnityEngine_Object_o *v20; // x21
  const MethodInfo *v21; // x4

  if ( (byte_4A03F65 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&ServantFilterCategoryContainer_TypeInfo, v7);
    byte_4A03F65 = 1;
  }
  categoryKind = this->fields.categoryKind;
  if ( (unsigned int)(categoryKind - 998) < 2 || categoryKind == 11 )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
    {
      CategoryTitleLocalizationKeyDic = this->fields.widget;
      if ( CategoryTitleLocalizationKeyDic )
      {
        UIWidget__ResizeCollider(CategoryTitleLocalizationKeyDic, 0LL);
        return;
      }
LABEL_35:
      sub_1B68930(CategoryTitleLocalizationKeyDic, v10);
    }
  }
  else
  {
    titleLabal = (UnityEngine_Object_o *)this->fields.titleLabal;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(titleLabal, 0LL, 0LL) )
    {
      v13 = this->fields.titleLabal;
      v14 = ServantFilterCategoryContainer_TypeInfo;
      if ( !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v14 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v14->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_35;
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)CategoryTitleLocalizationKeyDic,
               this->fields.categoryKind,
               (const MethodInfo_3162F10 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get((System_String_o *)Item, 0LL);
      if ( !v13 )
        goto LABEL_35;
      UILabel__set_text(v13, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v18);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v20 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid2, this->fields.grid2, isLast, v21);
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
    sub_1B68930(0LL, v5);
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
  ServantFilterCategoryContainer_c *v14; // x0
  UILabel_o *titleLabal; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *CategoryTitleLocalizationKeyDic; // x0
  Il2CppObject *Item; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *grid; // x23
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_4A03F67 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    sub_1B686D4(&ServantFilterCategoryContainer_TypeInfo, v13);
    byte_4A03F67 = 1;
  }
  v14 = ServantFilterCategoryContainer_TypeInfo;
  titleLabal = this->fields.titleLabal;
  if ( !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
    v14 = ServantFilterCategoryContainer_TypeInfo;
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v14->static_fields->CategoryTitleLocalizationKeyDic;
  if ( !CategoryTitleLocalizationKeyDic )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
           CategoryTitleLocalizationKeyDic,
           this->fields.categoryKind,
           (const MethodInfo_3162F10 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.grid;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v20, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
    if ( !CategoryTitleLocalizationKeyDic )
      goto LABEL_21;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic, 0LL);
    GameObjectExtensions__SetLocalPositionY(v21, (float)position3, 0LL);
  }
  CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lineSprite;
  if ( !CategoryTitleLocalizationKeyDic
    || (CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)CategoryTitleLocalizationKeyDic,
                                                                                                     0LL)) == 0LL )
  {
LABEL_21:
    sub_1B68930(CategoryTitleLocalizationKeyDic, *(_QWORD *)&position1);
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
    sub_1B68930(widget, method);
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
  Il2CppObject *v2; // x19

  if ( (byte_4A03F69 & 1) == 0 )
  {
    sub_1B686D4(&ServantFilterCategoryContainer___c_TypeInfo, v1);
    byte_4A03F69 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ServantFilterCategoryContainer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterCategoryContainer___c_TypeInfo->static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v2;
  sub_1B68678(ServantFilterCategoryContainer___c_TypeInfo->static_fields);
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
    sub_1B68930(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
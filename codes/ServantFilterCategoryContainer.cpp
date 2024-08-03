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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x19
  __int64 v24; // x0

  if ( (byte_49F7778 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v4);
    sub_1B640C8(&ServantFilterCategoryContainer_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11666/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/, v6);
    sub_1B640C8(&StringLiteral_11653/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/, v7);
    sub_1B640C8(&StringLiteral_11662/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/, v8);
    sub_1B640C8(&StringLiteral_11655/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/, v9);
    sub_1B640C8(&StringLiteral_11665/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/, v10);
    sub_1B640C8(&StringLiteral_11659/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/, v11);
    sub_1B640C8(&StringLiteral_11658/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/, v12);
    sub_1B640C8(&StringLiteral_11656/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/, v13);
    sub_1B640C8(&StringLiteral_11652/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/, v14);
    sub_1B640C8(&StringLiteral_11664/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/, v15);
    sub_1B640C8(&StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/, v16);
    sub_1B640C8(&StringLiteral_10361/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v17);
    sub_1B640C8(&StringLiteral_11654/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/, v18);
    sub_1B640C8(&StringLiteral_11660/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/, v19);
    sub_1B640C8(&StringLiteral_11661/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/, v20);
    sub_1B640C8(&StringLiteral_11637/*"SERVANT_SORT_EXPLANATION2"*/, v21);
    sub_1B640C8(&StringLiteral_11663/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/, v22);
    byte_49F7778 = 1;
  }
  v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v23,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v23 )
    sub_1B64324(v24);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    9,
    (Il2CppObject *)StringLiteral_11637/*"SERVANT_SORT_EXPLANATION2"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    10,
    (Il2CppObject *)StringLiteral_10361/*"PRESENT_BOX_FILTER_EXPLANATION"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    13,
    (Il2CppObject *)StringLiteral_11653/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS_GROUP"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    0,
    (Il2CppObject *)StringLiteral_11652/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    14,
    (Il2CppObject *)StringLiteral_11652/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    15,
    (Il2CppObject *)StringLiteral_11652/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_CLASS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    1,
    (Il2CppObject *)StringLiteral_11658/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_TYPE"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    2,
    (Il2CppObject *)StringLiteral_11657/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_NP_EFFECT"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    3,
    (Il2CppObject *)StringLiteral_11665/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_KIND"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    4,
    (Il2CppObject *)StringLiteral_11660/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_RARITY"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    5,
    (Il2CppObject *)StringLiteral_11655/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    6,
    (Il2CppObject *)StringLiteral_11655/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COSTUME"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    8,
    (Il2CppObject *)StringLiteral_11661/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_COMBINE_BASE"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    12,
    (Il2CppObject *)StringLiteral_11664/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_TYPE"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    19,
    (Il2CppObject *)StringLiteral_11662/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_COMBINE_STATUS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    20,
    (Il2CppObject *)StringLiteral_11663/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SERVANT_EQUIP_HAVE_STATUS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    7,
    (Il2CppObject *)StringLiteral_11659/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_OTHER"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    16,
    (Il2CppObject *)StringLiteral_11654/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_COLLECTION_STATUS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    17,
    (Il2CppObject *)StringLiteral_11656/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_HAVE_STATUS"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    18,
    (Il2CppObject *)StringLiteral_11666/*"SERVANT_SORT_FILTER_CATEGORY_TITLE_SUMMON_CATEGORY"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  ServantFilterCategoryContainer_TypeInfo->static_fields->CategoryTitleLocalizationKeyDic = (struct System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__o *)v23;
  sub_1B6406C(ServantFilterCategoryContainer_TypeInfo->static_fields);
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
  int32_t maxPerLine; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  float cellHeight; // s8
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  ServantFilterCategoryContainer___c_c *v22; // x8
  System_Predicate_object__o *_9__22_0; // x23
  Il2CppObject *v24; // x24
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x0
  __int64 v26; // x1
  int v27; // s9
  int32_t v28; // s10
  float v29; // s9
  __int64 v30; // x1
  float v31; // s0
  float v32; // s1
  float v33; // s8
  float v34; // s8
  unsigned int v35; // w8
  int v36; // w24
  int v37; // w25
  int32_t WIDGET_HEIGHT_DIFF; // w20
  float v39; // s9
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  UIWidget_o *v42; // x20
  unsigned int v43; // w10
  int v44; // w23
  int32_t v45; // w1
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7776 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__FindAll__, gridLayout);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__get_Count__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&System_Predicate_Transform__TypeInfo, v11);
    sub_1B640C8(&Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__, v12);
    sub_1B640C8(&ServantFilterCategoryContainer___c_TypeInfo, v13);
    byte_49F7776 = 1;
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
        v21 = (System_Collections_Generic_List_object__o *)ChildList;
        v22 = ServantFilterCategoryContainer___c_TypeInfo;
        if ( !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
        {
          ChildList = j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
          v22 = ServantFilterCategoryContainer___c_TypeInfo;
        }
        _9__22_0 = (System_Predicate_object__o *)v22->static_fields->__9__22_0;
        if ( !_9__22_0 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = ServantFilterCategoryContainer___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v22->static_fields->__9;
          _9__22_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_Transform__TypeInfo, v19, v20);
          System_Predicate_object____ctor(
            _9__22_0,
            v24,
            Method_ServantFilterCategoryContainer___c__GridLayout_b__22_0__,
            0LL);
          static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
          static_fields->__9__22_0 = (struct System_Predicate_Transform__o *)_9__22_0;
          ChildList = sub_1B6406C(&static_fields->__9__22_0);
        }
        if ( !v21 )
          goto LABEL_73;
        ChildList = (__int64)System_Collections_Generic_List_object___FindAll(
                               v21,
                               (System_Predicate_T__o *)_9__22_0,
                               (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_Transform__FindAll__);
        if ( !ChildList )
          goto LABEL_73;
        v27 = *(_DWORD *)(ChildList + 24);
        v28 = gridLayout->fields.maxPerLine;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v26);
          byte_49F779D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        ChildList = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gridLayout, 0LL);
        if ( !ChildList )
          goto LABEL_73;
        v29 = ceilf((float)v27 / (float)v28);
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)ChildList, 0LL);
        v31 = fabsf(localPosition.fields.y);
        v32 = (float)(int)v29 + -1.0;
        if ( v29 == INFINITY )
          v32 = -2147500000.0;
        v33 = this->fields.LINE_SPRITE_DIFF_Y
            + (float)((float)(fmaxf(v32, 0.0) * gridLayout->fields.cellHeight) + (float)((float)(cellHeight * 0.5) + v31));
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v30);
          byte_49F779D = 1;
        }
        v34 = -v33;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v35 = vcvtps_s32_f32(v34);
        if ( ceilf(v34) == INFINITY )
          v35 = 0x80000000;
        if ( this->fields.categoryKind == 19 )
          v36 = v35 - 3;
        else
          v36 = v35;
        if ( !byte_49F779E )
        {
          sub_1B640C8(&System_Math_TypeInfo, v30);
          byte_49F779E = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v37 = v36 >= 0 ? v36 : -v36;
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
          v39 = (float)(WIDGET_HEIGHT_DIFF + v37);
        }
        else
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( !ChildList )
            goto LABEL_73;
          v39 = (float)((float)((float)*(int *)(ChildList + 172) * 0.5) + (float)v37)
              + (float)this->fields.WIDGET_HEIGHT_DIFF;
        }
        v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
        GameObjectExtensions__SetLocalPositionY(v40, (float)v36, 0LL);
        v42 = this->fields.widget;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v41);
          byte_49F779D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v43 = vcvtps_s32_f32(v39);
        if ( ceilf(v39) == INFINITY )
          v44 = 0x80000000;
        else
          v44 = v43;
        if ( !byte_49F779E )
        {
          sub_1B640C8(&System_Math_TypeInfo, v41);
          byte_49F779E = 1;
        }
        ChildList = (__int64)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          ChildList = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( !v42
          || (v44 >= 0 ? (v45 = v44) : (v45 = -v44),
              UIWidget__set_height(v42, v45, 0LL),
              (ChildList = (__int64)this->fields.widget) == 0) )
        {
LABEL_73:
          sub_1B64324(ChildList);
        }
        UIWidget__ResizeCollider((UIWidget_o *)ChildList, 0LL);
        if ( (unsigned int)(this->fields.categoryKind - 16) <= 2 )
        {
          ChildList = (__int64)this->fields.lineSprite;
          if ( ChildList )
          {
            v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ChildList, 0LL);
            GameObjectExtensions__SetLocalPositionY(v46, (float)v36 + -1.0, 0LL);
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
  UIWidget_o *CategoryTitleLocalizationKeyDic; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v12; // x21
  ServantFilterCategoryContainer_c *v13; // x0
  Il2CppObject *Item; // x22
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v16; // x21
  const MethodInfo *v17; // x4
  UnityEngine_Object_o *grid2; // x21
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_49F7775 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ServantFilterCategoryContainer_TypeInfo, v7);
    byte_49F7775 = 1;
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
      sub_1B64324(CategoryTitleLocalizationKeyDic);
    }
  }
  else
  {
    titleLabal = (UnityEngine_Object_o *)this->fields.titleLabal;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(titleLabal, 0LL, 0LL) )
    {
      v12 = this->fields.titleLabal;
      v13 = ServantFilterCategoryContainer_TypeInfo;
      if ( !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v13 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)v13->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_35;
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)CategoryTitleLocalizationKeyDic,
               this->fields.categoryKind,
               (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CategoryTitleLocalizationKeyDic = (UIWidget_o *)LocalizationManager__Get((System_String_o *)Item, 0LL);
      if ( !v12 )
        goto LABEL_35;
      UILabel__set_text(v12, (System_String_o *)CategoryTitleLocalizationKeyDic, 0LL);
    }
    grid = (UnityEngine_Object_o *)this->fields.grid;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
        ServantFilterCategoryContainer__GridLayout(this, this->fields.grid, this->fields.grid, isLast, v17);
    }
    grid2 = (UnityEngine_Object_o *)this->fields.grid2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grid2, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.widget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64324(0LL);
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

  if ( (byte_49F7777 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&ServantFilterCategoryContainer_TypeInfo, v13);
    byte_49F7777 = 1;
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
           (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
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
    sub_1B64324(CategoryTitleLocalizationKeyDic);
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
    sub_1B64324(widget);
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
  Il2CppObject *v3; // x19

  if ( (byte_49F7779 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterCategoryContainer___c_TypeInfo, v1);
    byte_49F7779 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantFilterCategoryContainer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantFilterCategoryContainer___c_TypeInfo->static_fields->__9 = (struct ServantFilterCategoryContainer___c_o *)v3;
  sub_1B6406C(ServantFilterCategoryContainer___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}
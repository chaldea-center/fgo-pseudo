void __fastcall ServantFilterCategoryContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FD0D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo, v6);
    sub_B16FFC(&ServantFilterCategoryContainer_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11792, v8);
    sub_B16FFC(&StringLiteral_11781, v9);
    sub_B16FFC(&StringLiteral_11783, v10);
    sub_B16FFC(&StringLiteral_11791, v11);
    sub_B16FFC(&StringLiteral_11787, v12);
    sub_B16FFC(&StringLiteral_11786, v13);
    sub_B16FFC(&StringLiteral_11784, v14);
    sub_B16FFC(&StringLiteral_11780, v15);
    sub_B16FFC(&StringLiteral_11790, v16);
    sub_B16FFC(&StringLiteral_11785, v17);
    sub_B16FFC(&StringLiteral_10434, v18);
    sub_B16FFC(&StringLiteral_11782, v19);
    sub_B16FFC(&StringLiteral_11788, v20);
    sub_B16FFC(&StringLiteral_11789, v21);
    sub_B16FFC(&StringLiteral_11765, v22);
    byte_40FD0D7 = 1;
  }
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string___ctor__);
  if ( !v23 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    9,
    (System_String_o *)StringLiteral_11765,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    10,
    (System_String_o *)StringLiteral_10434,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    13,
    (System_String_o *)StringLiteral_11781,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    0,
    (System_String_o *)StringLiteral_11780,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    14,
    (System_String_o *)StringLiteral_11780,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    15,
    (System_String_o *)StringLiteral_11780,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    1,
    (System_String_o *)StringLiteral_11786,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    2,
    (System_String_o *)StringLiteral_11785,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    3,
    (System_String_o *)StringLiteral_11791,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    4,
    (System_String_o *)StringLiteral_11788,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    5,
    (System_String_o *)StringLiteral_11783,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    6,
    (System_String_o *)StringLiteral_11783,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    8,
    (System_String_o *)StringLiteral_11789,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    12,
    (System_String_o *)StringLiteral_11790,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    7,
    (System_String_o *)StringLiteral_11787,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    16,
    (System_String_o *)StringLiteral_11782,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    17,
    (System_String_o *)StringLiteral_11784,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    18,
    (System_String_o *)StringLiteral_11792,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v23;
  sub_B16F98(static_fields, (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
}


void __fastcall ServantFilterCategoryContainer___ctor(ServantFilterCategoryContainer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.LINE_SPRITE_DIFF_Y = 0x3FC0000042880000LL;
  *(_OWORD *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y = xmmword_3147AA0;
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
  UIWidget_o *v16; // x0
  UnityEngine_Object_o *titleLabal; // x21
  UILabel_o *v18; // x21
  ServantFilterCategoryContainer_c *v19; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *CategoryTitleLocalizationKeyDic; // x0
  System_String_o *Item; // x22
  System_String_o *v22; // x0
  UnityEngine_Object_o *grid; // x21
  UnityEngine_Object_o *v24; // x21
  struct UIGrid_o *v25; // x0
  int cellWidth_low; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v28; // x8
  struct UIGrid_o *v29; // x8
  struct UIGrid_o *v30; // x0
  float v31; // s9
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_Transform__o *ChildList; // x21
  ServantFilterCategoryContainer___c_c *v37; // x8
  struct ServantFilterCategoryContainer___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_0; // x22
  Il2CppObject *v40; // x23
  struct ServantFilterCategoryContainer___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_T__o *All; // x0
  struct UIGrid_o *v49; // x8
  int32_t v50; // w0
  int v51; // w21
  UnityEngine_Transform_o *transform; // x0
  float y; // s8
  float v54; // s0
  struct UIGrid_o *v55; // x8
  int v56; // w21
  int32_t v57; // w22
  UnityEngine_Component_o *lineSprite; // x0
  UnityEngine_Component_o **p_lineSprite; // x23
  int32_t categoryKind; // w20
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  float v63; // s9
  UnityEngine_GameObject_o *v64; // x0
  UIWidget_o *v65; // x20
  int32_t v66; // w0
  int32_t v67; // w0
  UIWidget_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD0D5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      isLast);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__FindAll__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__get_Count__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_Transform___ctor__, v9);
    sub_B16FFC(&System_Predicate_Transform__TypeInfo, v10);
    sub_B16FFC(&ServantFilterCategoryContainer_TypeInfo, v11);
    sub_B16FFC(&Method_ServantFilterCategoryContainer___c__Layout_b__18_0__, v12);
    sub_B16FFC(&ServantFilterCategoryContainer___c_TypeInfo, v13);
    byte_40FD0D5 = 1;
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
      v16 = this->fields.widget;
      if ( v16 )
      {
        UIWidget__ResizeCollider(v16, 0LL);
        return;
      }
LABEL_66:
      sub_B170D4();
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
      v18 = this->fields.titleLabal;
      v19 = ServantFilterCategoryContainer_TypeInfo;
      if ( (BYTE3(ServantFilterCategoryContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterCategoryContainer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer_TypeInfo);
        v19 = ServantFilterCategoryContainer_TypeInfo;
      }
      CategoryTitleLocalizationKeyDic = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v19->static_fields->CategoryTitleLocalizationKeyDic;
      if ( !CategoryTitleLocalizationKeyDic )
        goto LABEL_66;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               CategoryTitleLocalizationKeyDic,
               *(&this->fields.categoryKind + 1),
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get(Item, 0LL);
      if ( !v18 )
        goto LABEL_66;
      UILabel__set_text(v18, v22, 0LL);
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
      {
        v25 = this->fields.grid;
        if ( !v25 )
          goto LABEL_66;
        cellWidth_low = LODWORD(v25->fields.cellWidth);
        if ( cellWidth_low <= 5 )
        {
          if ( cellWidth_low == 5 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
            GameObjectExtensions__SetLocalScale(
              gameObject,
              *(UnityEngine_Vector3_o *)&this->fields.GRID_COLUMN_5_GRID_SCALE.fields.y,
              0LL);
            v28 = this->fields.grid;
            if ( !v28 )
              goto LABEL_66;
            v28->fields.cellHeight = this->fields.GRID_COLUMN_5_GRID_CELL_SIZE.fields.y;
            v29 = this->fields.grid;
            if ( !v29 )
              goto LABEL_66;
            *(float *)&v29->fields.animateSmoothly = this->fields.LINE_SPRITE_DIFF_Y;
            v25 = this->fields.grid;
            if ( !v25 )
              goto LABEL_66;
          }
          ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v25->klass->vtable._8_Reposition.method)(
            v25,
            v25->klass->vtable._9_ResetPosition.methodPtr);
          v30 = this->fields.grid;
          if ( !v30 )
            goto LABEL_66;
          v31 = *(float *)&v30->fields.animateSmoothly;
          ChildList = UIGrid__GetChildList(v30, 0LL);
          v37 = ServantFilterCategoryContainer___c_TypeInfo;
          if ( (BYTE3(ServantFilterCategoryContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantFilterCategoryContainer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantFilterCategoryContainer___c_TypeInfo);
            v37 = ServantFilterCategoryContainer___c_TypeInfo;
          }
          static_fields = v37->static_fields;
          _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_0;
          if ( !_9__18_0 )
          {
            if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              static_fields = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
            }
            v40 = (Il2CppObject *)static_fields->__9;
            _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                  System_Predicate_Transform__TypeInfo,
                                                                                  v32,
                                                                                  v33,
                                                                                  v34,
                                                                                  v35);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              _9__18_0,
              v40,
              Method_ServantFilterCategoryContainer___c__Layout_b__18_0__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_Transform___ctor__);
            v41 = ServantFilterCategoryContainer___c_TypeInfo->static_fields;
            v41->__9__18_0 = (struct System_Predicate_Transform__o *)_9__18_0;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v41->__9__18_0,
              (System_Int32_array **)_9__18_0,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
          }
          if ( !ChildList )
            goto LABEL_66;
          All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ChildList,
                  (System_Predicate_T__o *)_9__18_0,
                  (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_Transform__FindAll__);
          if ( !All )
            goto LABEL_66;
          v49 = this->fields.grid;
          if ( !v49 )
            goto LABEL_66;
          v50 = UnityEngine_Mathf__CeilToInt((float)All->fields._size / (float)SLODWORD(v49->fields.cellWidth), 0LL);
          if ( !this->fields.grid )
            goto LABEL_66;
          v51 = v50;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.grid, 0LL);
          if ( !transform )
            goto LABEL_66;
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          y = localPosition.fields.y;
          v54 = UnityEngine_Mathf__Max(0.0, (float)v51 + -1.0, 0LL);
          v55 = this->fields.grid;
          if ( !v55 )
            goto LABEL_66;
          v56 = UnityEngine_Mathf__CeilToInt(
                  -(float)(*(float *)&this->fields.WIDGET_HEIGHT_DIFF
                         + (float)((float)((float)(v31 * 0.5) + fabsf(y))
                                 + (float)(v54 * *(float *)&v55->fields.animateSmoothly))),
                  0LL);
          v57 = UnityEngine_Mathf__Abs_40727336(v56, 0LL);
          if ( isLast )
          {
            p_lineSprite = (UnityEngine_Component_o **)&this->fields.lineSprite;
            lineSprite = (UnityEngine_Component_o *)this->fields.lineSprite;
            if ( !lineSprite )
              goto LABEL_66;
            categoryKind = this->fields.categoryKind;
            v61 = UnityEngine_Component__get_gameObject(lineSprite, 0LL);
            if ( !v61 )
              goto LABEL_66;
            UnityEngine_GameObject__SetActive(v61, 0, 0LL);
            v62 = *p_lineSprite;
            if ( !*p_lineSprite )
              goto LABEL_66;
            v63 = (float)(categoryKind + v57);
          }
          else
          {
            p_lineSprite = (UnityEngine_Component_o **)&this->fields.lineSprite;
            v62 = (UnityEngine_Component_o *)this->fields.lineSprite;
            if ( !v62 )
              goto LABEL_66;
            v63 = (float)((float)((float)*((int *)&v62[6].fields + 1) * 0.5) + (float)v57)
                + (float)this->fields.categoryKind;
          }
          v64 = UnityEngine_Component__get_gameObject(v62, 0LL);
          GameObjectExtensions__SetLocalPositionY(v64, (float)v56, 0LL);
          v65 = this->fields.widget;
          v66 = UnityEngine_Mathf__CeilToInt(v63, 0LL);
          v67 = UnityEngine_Mathf__Abs_40727336(v66, 0LL);
          if ( !v65 )
            goto LABEL_66;
          UIWidget__set_height(v65, v67, 0LL);
          v68 = this->fields.widget;
          if ( !v68 )
            goto LABEL_66;
          UIWidget__ResizeCollider(v68, 0LL);
          if ( (unsigned int)(*(&this->fields.categoryKind + 1) - 16) <= 2 )
          {
            if ( !*p_lineSprite )
              goto LABEL_66;
            v69 = UnityEngine_Component__get_gameObject(*p_lineSprite, 0LL);
            GameObjectExtensions__SetLocalPositionY(v69, (float)v56 + -1.0, 0LL);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  System_String_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *grid; // x23
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *lineSprite; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_40FD0D6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__,
      *(_QWORD *)&position1);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ServantFilterCategoryContainer_TypeInfo, v13);
    byte_40FD0D6 = 1;
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
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_ListViewSort_FilterCategoryKind__string__get_Item__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(Item, 0LL);
  if ( !titleLabal )
    goto LABEL_24;
  UILabel__set_text(titleLabal, v18, 0LL);
  v19 = (UnityEngine_Component_o *)this->fields.titleLabal;
  if ( !v19 )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)position1, 0LL);
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(grid, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)this->fields.grid;
    if ( !v22 )
      goto LABEL_24;
    v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
    GameObjectExtensions__SetLocalPositionY(v23, (float)position2, 0LL);
  }
  if ( isDispLineSprite )
  {
    lineSprite = (UnityEngine_Component_o *)this->fields.lineSprite;
    if ( !lineSprite )
      goto LABEL_24;
    v25 = UnityEngine_Component__get_gameObject(lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v25, (float)position3, 0LL);
  }
  v26 = (UnityEngine_Component_o *)this->fields.lineSprite;
  if ( !v26 || (v27 = UnityEngine_Component__get_gameObject(v26, 0LL)) == 0LL )
LABEL_24:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v27, isDispLineSprite, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UIWidget_o *v8; // x8
  float v9; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  widget = (UnityEngine_Component_o *)this->fields.widget;
  if ( !widget
    || (transform = UnityEngine_Component__get_transform(widget, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v8 = this->fields.widget) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = v6 - (float)v8->fields.mHeight;
  result.fields.z = v7;
  result.fields.y = v9;
  result.fields.x = v5;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F762B & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterCategoryContainer___c_TypeInfo, v1);
    byte_40F762B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantFilterCategoryContainer___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterCategoryContainer___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}
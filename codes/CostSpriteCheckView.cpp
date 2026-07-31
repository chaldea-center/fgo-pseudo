void CostSpriteCheckView___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5935A63 & 1) == 0 )
  {
    sub_21FFC50(&CostSpriteCheckView_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_26853/*"読み込み成功"*/);
    sub_21FFC50(&StringLiteral_26809/*"全て"*/);
    sub_21FFC50(&StringLiteral_26852/*"読み込み失敗"*/);
    byte_5935A63 = 1;
  }
  v1 = sub_21FFD10(string___TypeInfo, 3);
  if ( !v1 )
    sub_21FFECC(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_26809/*"全て"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_26809/*"全て"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0)
    || (v17 = StringLiteral_26852/*"読み込み失敗"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_26852/*"読み込み失敗"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
    sub_21FFED4(v1);
  }
  v24 = StringLiteral_26853/*"読み込み成功"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_26853/*"読み込み成功"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  CostSpriteCheckView_TypeInfo->static_fields->filterNameList = (struct System_String_array *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CostSpriteCheckView_TypeInfo->static_fields,
    v9,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void CostSpriteCheckView___ctor(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CostSpriteCheckView__ChangeNextFilterMode(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  int32_t filterMode; // w8
  int32_t v3; // w8

  filterMode = this->fields.filterMode;
  if ( filterMode + 1 < 3 )
    v3 = filterMode + 1;
  else
    v3 = 0;
  this->fields.filterMode = v3;
}


void CostSpriteCheckView__Finish(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *costSpriteListManager; // x20

  if ( (byte_5935A62 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A62 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(costSpriteListManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.costSpriteListManager;
    if ( gameObject )
    {
      CostSpriteListManager__ClearAllList((CostSpriteListManager_o *)gameObject, v4);
      return;
    }
LABEL_10:
    sub_21FFECC(gameObject, v4);
  }
}


int32_t CostSpriteCheckView__GetListTypeByFilterMode(
        CostSpriteCheckView_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  if ( mode == 1 )
    return 1;
  else
    return 2 * (mode == 2);
}


void CostSpriteCheckView__Init(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *costSpriteListManager; // x20
  const MethodInfo *v5; // x1
  CostSpriteListManager_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t filterMode; // w8
  int32_t v9; // w1

  if ( (byte_5935A60 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A60 = 1;
  }
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(costSpriteListManager, 0, 0) )
  {
    v6 = this->fields.costSpriteListManager;
    if ( !v6
      || (CostSpriteListManager__Init(v6, v5), (v6 = this->fields.costSpriteListManager) == 0)
      || (CostSpriteListManager__Load(v6, v5), (v6 = this->fields.costSpriteListManager) == 0) )
    {
      sub_21FFECC(v6, v5);
    }
    filterMode = this->fields.filterMode;
    if ( filterMode == 1 )
      v9 = 1;
    else
      v9 = 2 * (filterMode == 2);
    CostSpriteListManager__CreateList(v6, v9, v7);
  }
}


// attributes: thunk
void CostSpriteCheckView__OnClickCloseButton(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  CostSpriteCheckView__Finish(this, method);
}


void CostSpriteCheckView__OnClickFilterButton(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t filterMode; // w8
  int32_t v4; // w1

  filterMode = this->fields.filterMode;
  if ( filterMode + 1 < 3 )
    v4 = filterMode + 1;
  else
    v4 = 0;
  this->fields.filterMode = v4;
  CostSpriteCheckView__UpdateDisp(this, v4, v2);
}


void CostSpriteCheckView__Setup(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *filterLabel; // x20
  __int64 v6; // x8
  __int64 filterMode; // x9
  System_Action_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_5935A5F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_CostSpriteCheckView__Setup_b__10_0__);
    sub_21FFC50(&CostSpriteCheckView_TypeInfo);
    byte_5935A5F = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)CostSpriteCheckView_TypeInfo;
  filterLabel = this->fields.filterLabel;
  this->fields.filterMode = 0;
  if ( !HIDWORD(gameObject[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(gameObject, method, v2);
    gameObject = (UnityEngine_GameObject_o *)CostSpriteCheckView_TypeInfo;
  }
  v6 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v6 )
    goto LABEL_12;
  filterMode = this->fields.filterMode;
  if ( (unsigned int)filterMode >= *(_DWORD *)(v6 + 24) )
    sub_21FFED4(gameObject);
  if ( !filterLabel
    || (UILabel__set_text(filterLabel, *(System_String_o **)(v6 + 8 * filterMode + 32), 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_21FFECC(gameObject, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CostSpriteCheckView__Setup_b__10_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__LoadOutGameAtlas(v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void CostSpriteCheckView__UpdateDisp(CostSpriteCheckView_o *this, int32_t mode, const MethodInfo *method)
{
  ListViewManager_o *v5; // x0
  UILabel_o *filterLabel; // x21
  ListViewSort_c *klass; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *costSpriteListManager; // x21
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  if ( (byte_5935A61 & 1) == 0 )
  {
    sub_21FFC50(&CostSpriteCheckView_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A61 = 1;
  }
  v5 = (ListViewManager_o *)CostSpriteCheckView_TypeInfo;
  filterLabel = this->fields.filterLabel;
  if ( !*(&CostSpriteCheckView_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CostSpriteCheckView_TypeInfo, *(_QWORD *)&mode, method);
    v5 = (ListViewManager_o *)CostSpriteCheckView_TypeInfo;
  }
  klass = v5->fields.sort->klass;
  if ( !klass )
    goto LABEL_18;
  if ( LODWORD(klass->_1.namespaze) <= mode )
    sub_21FFED4(v5);
  if ( !filterLabel )
    goto LABEL_18;
  UILabel__set_text(filterLabel, *((System_String_o **)&klass->_1.byval_arg.data + mode), 0);
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(costSpriteListManager, 0, 0) )
  {
    v5 = (ListViewManager_o *)this->fields.costSpriteListManager;
    if ( v5 )
    {
      ListViewManager__DestroyList(v5, 0);
      v5 = (ListViewManager_o *)this->fields.costSpriteListManager;
      if ( v5 )
      {
        if ( mode == 1 )
          v12 = 1;
        else
          v12 = 2 * (mode == 2);
        CostSpriteListManager__CreateList((CostSpriteListManager_o *)v5, v12, v11);
        return;
      }
    }
LABEL_18:
    sub_21FFECC(v5, *(_QWORD *)&mode);
  }
}


int32_t CostSpriteCheckView__get_filterModeMax(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  return 2;
}


int32_t CostSpriteCheckView__get_filterModeMin(CostSpriteCheckView_o *this, const MethodInfo *method)
{
  return 0;
}
void CostSpriteCheckView___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C34E57 & 1) == 0 )
  {
    sub_1C32C20(&CostSpriteCheckView_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_25500/*"読み込み成功"*/);
    sub_1C32C20(&StringLiteral_25456/*"全て"*/);
    sub_1C32C20(&StringLiteral_25499/*"読み込み失敗"*/);
    byte_4C34E57 = 1;
  }
  v1 = sub_1C32CC8(string___TypeInfo, 3);
  if ( !v1 )
    sub_1C32E7C(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v5 = StringLiteral_25456/*"全て"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_25456/*"全て"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3),
        *(_DWORD *)(v4 + 24) <= 1u)
    || (v8 = StringLiteral_25499/*"読み込み失敗"*/,
        *(_QWORD *)(v4 + 40) = StringLiteral_25499/*"読み込み失敗"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7),
        *(_DWORD *)(v4 + 24) <= 2u) )
  {
    sub_1C32E84(v1);
  }
  v11 = StringLiteral_25500/*"読み込み成功"*/;
  *(_QWORD *)(v4 + 48) = StringLiteral_25500/*"読み込み成功"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 48), v11, v9, v10);
  CostSpriteCheckView_TypeInfo->static_fields->filterNameList = (struct System_String_array *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)CostSpriteCheckView_TypeInfo->static_fields, v4, v12, v13);
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
  UnityEngine_Object_o *costSpriteListManager; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C34E56 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E56 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costSpriteListManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.costSpriteListManager;
    if ( gameObject )
    {
      CostSpriteListManager__ClearAllList((CostSpriteListManager_o *)gameObject, v5);
      return;
    }
LABEL_10:
    sub_1C32E7C(gameObject);
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
  UnityEngine_Object_o *costSpriteListManager; // x20
  const MethodInfo *v4; // x1
  CostSpriteListManager_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t filterMode; // w8
  int32_t v9; // w1

  if ( (byte_4C34E54 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E54 = 1;
  }
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costSpriteListManager, 0, 0) )
  {
    v5 = this->fields.costSpriteListManager;
    if ( !v5
      || (CostSpriteListManager__Init(v5, v4), (v5 = this->fields.costSpriteListManager) == 0)
      || (CostSpriteListManager__Load(v5, v6), (v5 = this->fields.costSpriteListManager) == 0) )
    {
      sub_1C32E7C(v5);
    }
    filterMode = this->fields.filterMode;
    if ( filterMode == 1 )
      v9 = 1;
    else
      v9 = 2 * (filterMode == 2);
    CostSpriteListManager__CreateList(v5, v9, v7);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *filterLabel; // x20
  int32_t filterMode; // w8
  __int64 v6; // x9
  System_Action_o *v7; // x20

  if ( (byte_4C34E53 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_CostSpriteCheckView__Setup_b__10_0__);
    sub_1C32C20(&CostSpriteCheckView_TypeInfo);
    byte_4C34E53 = 1;
  }
  this->fields.filterMode = 0;
  gameObject = (UnityEngine_GameObject_o *)CostSpriteCheckView_TypeInfo;
  filterLabel = this->fields.filterLabel;
  if ( CostSpriteCheckView_TypeInfo->_2.cctor_finished )
  {
    filterMode = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(CostSpriteCheckView_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)CostSpriteCheckView_TypeInfo;
    filterMode = this->fields.filterMode;
  }
  v6 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v6 )
    goto LABEL_13;
  if ( (unsigned int)filterMode >= *(_DWORD *)(v6 + 24) )
    sub_1C32E84(gameObject);
  if ( !filterLabel
    || (UILabel__set_text(filterLabel, *(System_String_o **)(v6 + 8LL * filterMode + 32), 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_13:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CostSpriteCheckView__Setup_b__10_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v7, 0);
}


void CostSpriteCheckView__UpdateDisp(CostSpriteCheckView_o *this, int32_t mode, const MethodInfo *method)
{
  ListViewManager_o *v5; // x0
  UILabel_o *filterLabel; // x21
  ListViewSort_c *klass; // x8
  UnityEngine_Object_o *costSpriteListManager; // x21
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4C34E55 & 1) == 0 )
  {
    sub_1C32C20(&CostSpriteCheckView_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E55 = 1;
  }
  v5 = (ListViewManager_o *)CostSpriteCheckView_TypeInfo;
  filterLabel = this->fields.filterLabel;
  if ( !CostSpriteCheckView_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CostSpriteCheckView_TypeInfo);
    v5 = (ListViewManager_o *)CostSpriteCheckView_TypeInfo;
  }
  klass = v5->fields.sort->klass;
  if ( !klass )
    goto LABEL_18;
  if ( LODWORD(klass->_1.namespaze) <= mode )
    sub_1C32E84(v5);
  if ( !filterLabel )
    goto LABEL_18;
  UILabel__set_text(filterLabel, *((System_String_o **)&klass->_1.byval_arg.data + mode), 0);
  costSpriteListManager = (UnityEngine_Object_o *)this->fields.costSpriteListManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = 1;
        else
          v10 = 2 * (mode == 2);
        CostSpriteListManager__CreateList((CostSpriteListManager_o *)v5, v10, v9);
        return;
      }
    }
LABEL_18:
    sub_1C32E7C(v5);
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
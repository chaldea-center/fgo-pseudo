void ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  this->fields.defaultPageSpriteStepX = 20.0;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void ServantStatusCharaGraphListViewIndicator__Awake(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UISprite_o *pageSprite; // x21
  __int64 v12; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x0

  if ( (byte_596C2BB & 1) == 0 )
  {
    sub_2213A60(&UISprite___TypeInfo);
    byte_596C2BB = 1;
  }
  v3 = sub_2213B20(UISprite___TypeInfo, 1);
  if ( !v3 )
    sub_2213CDC(0, v4);
  pageSprite = this->fields.pageSprite;
  v12 = v3;
  if ( pageSprite )
  {
    v3 = sub_2213BB4(this->fields.pageSprite, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v20 = sub_2213D00(0, v13);
      sub_2213BA0(v20, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_2213CE4(v3);
  *(_QWORD *)(v12 + 32) = pageSprite;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)pageSprite, v5, v6, v7, v8, v9, v10);
  this->fields.pageSpriteList = (struct UISprite_array *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.pageSpriteList, v12, v14, v15, v16, v17, v18, v19);
}


int32_t ServantStatusCharaGraphListViewIndicator__GetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void ServantStatusCharaGraphListViewIndicator__OnClickLeft(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  int32_t *p_pageIndex; // x20
  ListViewManager_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_596C2C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
    byte_596C2C0 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) )
  {
    p_pageIndex = &this->fields.pageIndex;
    if ( (this->fields.pageIndex & 0x80000000) == 0 )
    {
      v7 = this->fields.manager;
      if ( !v7 )
        goto LABEL_21;
      ListViewManager__BackLoopItem(v7, 0);
      if ( *p_pageIndex >= 1 )
      {
        v8 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
        v7 = this->fields.manager;
        if ( !v7 )
          goto LABEL_21;
LABEL_19:
        ListViewManager__MoveCenterItem(v7, *p_pageIndex - 1, 1, 0, 0.0, 0, 0);
        return;
      }
      v10 = this->fields.manager;
      if ( !v10 )
        goto LABEL_21;
      if ( v10->fields.isLoop )
      {
        v11 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
        v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
        v7 = this->fields.manager;
        if ( !v7 )
LABEL_21:
          sub_2213CDC(v7, v5);
        p_pageIndex = &this->fields.pageMax;
        goto LABEL_19;
      }
    }
  }
}


void ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w1
  struct ListViewManager_o *v11; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_596C2C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
    byte_596C2C1 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v6, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v8 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v6, v10, 1, 0, 0.0, 0, 0);
        return;
      }
      goto LABEL_22;
    }
    v11 = this->fields.manager;
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.isLoop )
    {
      v12 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_2213CDC(v6, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__OnModifyCenterItem(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int32_t index; // w1

  this->fields.manager = manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)item,
    (System_String_o *)isTop,
    isBottom,
    isLeft,
    isRight,
    (bool)method);
  ServantStatusCharaGraphListViewIndicator__UpdateArrowVisibility(this, isLeft, isRight, v12);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  ServantStatusCharaGraphListViewIndicator__SetPageIndex(this, index, v13);
}


void ServantStatusCharaGraphListViewIndicator__OnModifyPosition(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool isRight; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  if ( !manager )
    sub_2213CDC(this, 0);
  ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0);
  ServantStatusCharaGraphListViewIndicator__UpdateArrowVisibility(this, isLeft, isRight, v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
        ServantStatusCharaGraphListViewIndicator_o *this,
        bool active,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w21
  UnityEngine_Object_o *manager; // x20
  __int64 v8; // x1
  ListViewManager_o *v9; // x0
  const MethodInfo *v10; // x3
  bool isRight; // [xsp+8h] [xbp-38h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-34h] BYREF
  bool isBottom; // [xsp+18h] [xbp-28h] BYREF
  bool isTop; // [xsp+1Ch] [xbp-24h] BYREF

  v6 = active;
  if ( (byte_596C2BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2BC = 1;
  }
  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  this->fields.isEnableArrowObj = v6;
  if ( !active )
    goto LABEL_7;
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active, method);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) )
  {
    v9 = this->fields.manager;
    if ( !v9 )
      sub_2213CDC(0, v8);
    ListViewManager__GetCanScrollList(v9, &isTop, &isBottom, &isLeft, &isRight, 0);
    ServantStatusCharaGraphListViewIndicator__UpdateArrowVisibility(this, isLeft, isRight, v10);
  }
  else
  {
LABEL_7:
    ServantStatusCharaGraphListViewIndicator__UpdateArrowVisibility(this, 0, 0, v3);
  }
}


void ServantStatusCharaGraphListViewIndicator__SetIndexMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  ServantStatusCharaGraphListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_2213CDC(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UISprite_array *pageSpriteList; // x8
  int32_t pageMax; // w9
  int32_t max_length; // w8
  int32_t v8; // w2

  pageSpriteList = this->fields.pageSpriteList;
  this->fields.pageIndex = index;
  if ( !pageSpriteList )
    sub_2213CDC(this, *(_QWORD *)&index);
  pageMax = this->fields.pageMax;
  max_length = pageSpriteList->max_length;
  if ( pageMax < max_length )
    max_length = this->fields.pageMax;
  if ( pageMax <= index || index <= -1 )
    v8 = -1;
  else
    v8 = index;
  ServantStatusCharaGraphListViewIndicator__UpdatePageSpriteState(this, max_length, v8, v3);
}


void ServantStatusCharaGraphListViewIndicator__SetPageMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  int v3; // w20
  UnityEngine_GameObject_o *pageBaseObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct UISprite_array *pageSpriteList; // x8
  int max_length; // w8
  float y; // s8
  float z; // s9
  float v12; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v3 = max;
  ServantStatusCharaGraphListViewIndicator__SetupPageSprites(this, max, method);
  pageSpriteList = this->fields.pageSpriteList;
  this->fields.pageMax = v3;
  this->fields.pageIndex = -1;
  if ( !pageSpriteList )
    goto LABEL_12;
  max_length = pageSpriteList->max_length;
  if ( v3 >= max_length )
    v3 = max_length;
  ServantStatusCharaGraphListViewIndicator__UpdatePageSpriteState(this, v3, -1, v7);
  pageBaseObject = this->fields.pageBaseObject;
  if ( !pageBaseObject )
    goto LABEL_12;
  pageBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(pageBaseObject, 0);
  if ( !pageBaseObject )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pageBaseObject, 0);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v12 = v3 < 1 ? 0.0 : (float)(this->fields.defaultPageSpriteStepX * -0.5) * (float)(v3 - 1);
  pageBaseObject = this->fields.pageBaseObject;
  if ( !pageBaseObject
    || (pageBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(pageBaseObject, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(pageBaseObject, v6);
  }
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)pageBaseObject, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetupPageSprites(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x20
  struct UISprite_array *pageSpriteList; // x8
  struct UISprite_array **p_pageSpriteList; // x21
  UnityEngine_Transform_o *transform; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UISprite_array *v14; // x8
  unsigned int *v15; // x23
  struct UnityEngine_GameObject_o **p_leftObject; // x27
  __int64 v17; // x25
  __int64 v18; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v20; // x28
  __int64 v21; // x24
  __int64 v22; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float defaultPageSpriteStepX; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v28; // s11
  float v29; // s12
  float v30; // s13
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  float v37; // s11
  float v38; // s12
  float v39; // s13
  ServantStatusCharaGraphListViewIndicator_o *v40; // x24
  Il2CppObject *pageSprite; // x25
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x26
  UnityEngine_Component_o *v49; // x25
  ServantStatusCharaGraphListViewIndicator_o *v50; // x25
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *name; // x26
  System_String_o *v53; // x0
  __int64 v54; // x0
  int32_t max_length; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_596C2BE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596C2BE = 1;
  }
  max_length = 0;
  p_pageSpriteList = &v4->fields.pageSpriteList;
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_15;
  if ( SLODWORD(pageSpriteList->max_length) < count )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_2213B20(UISprite___TypeInfo, (unsigned int)count);
    v14 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_15;
    v15 = (unsigned int *)this;
    p_leftObject = &this->fields.leftObject;
    v17 = 4;
    v18 = 8;
    while ( 1 )
    {
      max_length_low = LODWORD(v14->max_length);
      v20 = v17 - 4;
      if ( v17 - 4 >= (int)max_length_low )
        break;
      if ( v20 >= max_length_low )
        goto LABEL_38;
      if ( v15 )
      {
        v21 = *((_QWORD *)&v14->obj.klass + v17);
        if ( v21 )
        {
          this = (ServantStatusCharaGraphListViewIndicator_o *)sub_2213BB4(v21, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
          if ( !this )
          {
LABEL_39:
            v54 = sub_2213D00(this, v22);
            sub_2213BA0(v54, 0);
          }
        }
        if ( v20 >= v15[6] )
LABEL_38:
          sub_2213CE4(this);
        *(_QWORD *)&v15[2 * v17] = v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[v18], v21, v8, v9, v10, v11, v12, v13);
        v14 = *p_pageSpriteList;
        ++v17;
        v18 += 2;
        if ( *p_pageSpriteList )
          continue;
      }
      goto LABEL_15;
    }
    this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageSprite;
    if ( !this )
      goto LABEL_15;
    this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
    if ( !this )
      goto LABEL_15;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !byte_5969AE7 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE7 = 1;
    }
    this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageSprite;
    if ( !this
      || (defaultPageSpriteStepX = v4->fields.defaultPageSpriteStepX,
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields,
          v28 = static_fields->rightVector.fields.x,
          v29 = static_fields->rightVector.fields.y,
          v30 = static_fields->rightVector.fields.z,
          this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0),
          !*p_pageSpriteList) )
    {
LABEL_15:
      sub_2213CDC(this, *(_QWORD *)&count);
    }
    max_length = (*p_pageSpriteList)->max_length;
    if ( max_length < count )
    {
      v37 = v28 * defaultPageSpriteStepX;
      v38 = v29 * defaultPageSpriteStepX;
      v39 = v30 * defaultPageSpriteStepX;
      v40 = this;
      do
      {
        pageSprite = (Il2CppObject *)v4->fields.pageSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count, v31);
        this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Object__Instantiate_object_(
                                                               pageSprite,
                                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !v15 )
          goto LABEL_15;
        v48 = max_length;
        v49 = (UnityEngine_Component_o *)this;
        if ( this )
        {
          this = (ServantStatusCharaGraphListViewIndicator_o *)sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
          if ( !this )
            goto LABEL_39;
        }
        if ( (unsigned int)v48 >= v15[6] )
          goto LABEL_38;
        *(_QWORD *)&v15[2 * v48 + 8] = v49;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&p_leftObject[v48], (int32_t)v49, v42, v43, v44, v45, v46, v47);
        if ( !v49 )
          goto LABEL_15;
        this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Component__get_transform(v49, 0);
        if ( !this )
          goto LABEL_15;
        v50 = this;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, transform, 0);
        if ( !v40 )
          goto LABEL_15;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v40, 0);
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v50, localScale, 0);
        localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)v40, 0);
        UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)v50, localRotation, 0);
        v58.fields.x = x + (float)(v37 * (float)max_length);
        v58.fields.y = y + (float)(v38 * (float)max_length);
        v58.fields.z = z + (float)(v39 * (float)max_length);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v50, v58, 0);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0);
        this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v40,
                                                               0);
        if ( !this )
          goto LABEL_15;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        v53 = System_Int32__ToString((int32_t)&max_length, 0);
        this = (ServantStatusCharaGraphListViewIndicator_o *)System_String__Concat_75694928(
                                                               name,
                                                               (System_String_o *)StringLiteral_16746/*"_"*/,
                                                               v53,
                                                               0);
        if ( !gameObject )
          goto LABEL_15;
        UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
      }
      while ( ++max_length < count );
    }
    *p_pageSpriteList = (struct UISprite_array *)v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.pageSpriteList,
      (int32_t)v15,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__UpdateArrowVisibility(
        ServantStatusCharaGraphListViewIndicator_o *this,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  char v4; // w19
  bool v5; // w21
  UnityEngine_Object_o *manager; // x22
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v9; // x1
  struct ListViewManager_o *v10; // x8
  char v11; // w9
  _BOOL4 isEnableArrowObj; // w22

  v4 = isRight;
  v5 = isLeft;
  if ( (byte_596C2BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2BD = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLeft, isRight);
  leftObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(manager, 0, 0);
  if ( ((unsigned __int8)leftObject & 1) != 0 )
  {
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_12;
    v11 = v5 | v4;
    if ( v10->fields.isLoop )
    {
      v4 |= v5;
      v5 = v11;
    }
  }
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (isEnableArrowObj = this->fields.isEnableArrowObj,
        UnityEngine_GameObject__SetActive(leftObject, v5 && this->fields.isEnableArrowObj, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_12:
    sub_2213CDC(leftObject, v9);
  }
  UnityEngine_GameObject__SetActive(leftObject, v4 & isEnableArrowObj, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__UpdatePageSpriteState(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t activeMax,
        int32_t onIndex,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v6; // x21
  struct UISprite_array *pageSpriteList; // x8
  int32_t v8; // w24
  int32_t max_length; // w9
  struct UISprite_array *v10; // x8
  __int64 *v11; // x8
  System_String_o *v12; // x1

  v6 = this;
  if ( (byte_596C2BF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21574/*"img_slider_on"*/);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_2213A60(&StringLiteral_21573/*"img_slider_off"*/);
    byte_596C2BF = 1;
  }
  pageSpriteList = v6->fields.pageSpriteList;
  if ( !pageSpriteList )
LABEL_22:
    sub_2213CDC(this, *(_QWORD *)&activeMax);
  v8 = 0;
  while ( 1 )
  {
    max_length = pageSpriteList->max_length;
    if ( v8 >= max_length )
      break;
    if ( v8 >= (unsigned int)max_length )
      goto LABEL_24;
    this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v8];
    if ( !this )
      goto LABEL_22;
    this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 < activeMax, 0);
    v10 = v6->fields.pageSpriteList;
    if ( v8 >= activeMax )
    {
      if ( !v10 )
        goto LABEL_22;
      if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
LABEL_24:
        sub_2213CE4(this);
      this = (ServantStatusCharaGraphListViewIndicator_o *)v10->m_Items[v8];
      if ( !this )
        goto LABEL_22;
      v12 = 0;
    }
    else
    {
      if ( !v10 )
        goto LABEL_22;
      if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
        goto LABEL_24;
      this = (ServantStatusCharaGraphListViewIndicator_o *)v10->m_Items[v8];
      if ( !this )
        goto LABEL_22;
      if ( onIndex == v8 )
        v11 = &StringLiteral_21574/*"img_slider_on"*/;
      else
        v11 = &StringLiteral_21573/*"img_slider_off"*/;
      v12 = (System_String_o *)*v11;
    }
    UISprite__set_spriteName((UISprite_o *)this, v12, 0);
    pageSpriteList = v6->fields.pageSpriteList;
    ++v8;
    if ( !pageSpriteList )
      goto LABEL_22;
  }
}
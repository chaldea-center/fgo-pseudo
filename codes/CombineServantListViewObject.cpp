void CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A85D & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2A85D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4D2A850 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
    byte_4D2A850 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = (struct CombineServantListViewItemDraw_o *)Component_object;
  sub_1C93A78(&this->fields.itemDraw, Component_object);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v6;
  sub_1C93A78(&this->fields.itemDrag, v6);
}


UnityEngine_GameObject_o *CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2A855 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A855 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0 )
    {
      sub_1C93D2C(Component_object, v5);
    }
    CombineServantListViewObject__Init_31903856((CombineServantListViewObject_o *)Component_object, 2, v6);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2A852 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    byte_4D2A852 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    return (CombineServantListViewItem_o *)this->fields.linkItem;
  return 0;
}


void CombineServantListViewObject__Init(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w8
  __int64 naturalAligment; // x10
  int32_t v13; // w23
  bool v14; // w21
  bool v15; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  bool v18; // w24
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v20; // x1
  int32_t v21; // w9
  struct System_Action_o *v22; // x19

  if ( (byte_4D2A856 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    byte_4D2A856 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (v13 = initMode,
        (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
  {
    sub_1C940C8(linkItem);
LABEL_7:
    v13 = 0;
  }
  v14 = initMode == 4;
  v15 = state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(CombineServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C93A78(&this->fields.callbackFunc, callbackFunc);
  if ( (unsigned int)v13 <= 4 )
  {
    v21 = dword_D333E4[v13];
    this->fields.dispMode = dword_D333D0[v13];
    this->fields.state = v21;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v20);
  v22 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C93A78(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
  }
}


void CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void CombineServantListViewObject__Init_31903856(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void CombineServantListViewObject__Init_31906060(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void CombineServantListViewObject__Init_31906144(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
}


bool CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewObject_o *v2; // x19
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4D2A854 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    this = (CombineServantListViewObject_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A854 = 1;
  }
  manager = (CombineServantListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    this = (CombineServantListViewObject_o *)sub_1C940C8(v2->fields.manager);
    goto LABEL_19;
  }
  if ( !CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)v2->fields.manager, 0) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    this = (CombineServantListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0);
      return 0;
    }
LABEL_19:
    sub_1C93D2C(this, method);
  }
  linkItem = (CombineServantListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v6)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(manager, linkItem, 0) )
      return 1;
    goto LABEL_12;
  }
  v9 = (CombineServantListViewObject_o *)sub_1C940C8(v2->fields.linkItem);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v9, v10);
}


void CombineServantListViewObject__OnClickSelect(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v3; // x19
  CombineServantListViewItem_o *linkItem; // x20
  CombineServantListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  __int64 v7; // x9
  int32_t modeKind; // w8
  int64_t v9; // x0
  bool v10; // w21
  _QWORD *v11; // x8
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  _QWORD *v14; // x0
  int64_t UserSvtId; // x0
  bool v16; // w21
  _QWORD *v17; // x8
  __int64 *v18; // x8
  _QWORD *v19; // x0
  int32_t v20; // w20
  System_Reflection_MethodBase_o *v21; // x0

  v3 = this;
  if ( (byte_4D2A859 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&Method_CombineServantListViewObject_OnClickSelect__);
    sub_1C93AD4(&StringLiteral_9922/*"OnClickSelectBase"*/);
    sub_1C93AD4(&StringLiteral_9924/*"OnClickSelectMaterial"*/);
    this = (CombineServantListViewObject_o *)sub_1C93AD4(&StringLiteral_9926/*"OnClickSelectPush"*/);
    byte_4D2A859 = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = CombineServantListViewItem_TypeInfo;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( !manager )
        goto LABEL_52;
      v7 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)v7
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewManager_TypeInfo )
      {
        ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0);
        modeKind = manager->fields.modeKind;
        if ( modeKind != 3 )
        {
          if ( modeKind == 2 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
            v16 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, 0);
            v17 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v17 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
            v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v17, v17[4]);
            if ( !v16 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
              CombineServantListViewItem__SwapChoice(linkItem, 0);
              goto LABEL_33;
            }
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0);
            return;
          }
          if ( modeKind == 1 )
          {
            v9 = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
            v10 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v9, 0);
            v11 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v11 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
            v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v11, v11[4]);
            if ( !v10 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v12, 11, 0, 0);
              CombineServantListViewItem__SwapLock(linkItem, 0);
LABEL_33:
              CombineServantListViewObject__SetupDisp(v3, v13);
              return;
            }
            goto LABEL_23;
          }
          switch ( linkItem->fields.type )
          {
            case 0:
            case 2:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) || linkItem->fields.isBaseSvt )
              {
                this = (CombineServantListViewObject_o *)v3->fields.manager;
                if ( this )
                {
                  v18 = &StringLiteral_9922/*"OnClickSelectBase"*/;
LABEL_31:
                  UnityEngine_Component__SendMessage(
                    (UnityEngine_Component_o *)this,
                    (System_String_o *)*v18,
                    (Il2CppObject *)v3,
                    0);
                  return;
                }
                goto LABEL_52;
              }
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) )
                return;
              goto LABEL_17;
            case 1:
            case 5:
              if ( CombineServantListViewItem__get_IsCanNotSelect(linkItem, 0) )
                goto LABEL_17;
              if ( linkItem->fields.isMaterialSvt )
              {
                linkItem->fields.isMaterialSvt = 0;
                v19 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                  v19 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
                v20 = 1;
              }
              else
              {
                v19 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( linkItem->fields.isMaxSelect )
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v19 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
                  v20 = 2;
                }
                else
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v19 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
                  v20 = 0;
                }
              }
              v21 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v19, v19[4]);
              OverwriteAssetSoundName__PlaySystemSe(v21, v20, 0, 0);
              this = (CombineServantListViewObject_o *)v3->fields.manager;
              if ( !this )
                goto LABEL_52;
              v18 = &StringLiteral_9924/*"OnClickSelectMaterial"*/;
              goto LABEL_31;
            default:
              return;
          }
        }
        if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0) )
        {
LABEL_17:
          v14 = Method_CombineServantListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C93AEC(Method_CombineServantListViewObject_OnClickSelect__);
          v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
          goto LABEL_23;
        }
        this = (CombineServantListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          v18 = &StringLiteral_9926/*"OnClickSelectPush"*/;
          goto LABEL_31;
        }
LABEL_52:
        sub_1C93D2C(this, v5);
      }
    }
    else
    {
      sub_1C940C8(v3->fields.linkItem);
    }
    this = (CombineServantListViewObject_o *)sub_1C940C8(manager);
    goto LABEL_52;
  }
}


void CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4D2A851 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A851 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C93A78(p_dragObject, 0);
  }
}


void CombineServantListViewObject__OnDragDropStart(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4D2A85B & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A85B = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C940C8(manager);
    goto LABEL_14;
  }
  if ( CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)manager, 0) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_1C93D2C(manager, method);
    }
  }
}


void CombineServantListViewObject__OnLongPush(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x20
  void *v4; // x1
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *manager; // x21
  __int64 v7; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  CombineServantListViewObject_o *v10; // x0
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4D2A85A & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    this = (CombineServantListViewObject_o *)sub_1C93AD4(&StringLiteral_10002/*"OnPressCancel"*/);
    byte_4D2A85A = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = CombineServantListViewItem_TypeInfo;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v2->fields.manager;
      if ( manager )
      {
        v4 = CombineServantListViewManager_TypeInfo;
        v7 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v7
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewManager_TypeInfo )
        {
          v10 = (CombineServantListViewObject_o *)sub_1C940C8(v2->fields.manager);
          CombineServantListViewObject__OnDragDropStart(v10, v11);
          return;
        }
      }
      if ( (LODWORD(linkItem[1].klass) | 4) == 5 )
      {
        if ( manager )
        {
          if ( CombineServantListViewManager__IsDragEnable(
                 (CombineServantListViewManager_o *)v2->fields.manager,
                 (CombineServantListViewItem_o *)v2->fields.linkItem,
                 0) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0);
            CombineServantListViewManager__SetDragStart(manager, sortIndex, !IsSelect, 0);
          }
          return;
        }
      }
      else
      {
        this = (CombineServantListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
        if ( this )
        {
          UnityEngine_GameObject__SendMessage_72101276(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_10002/*"OnPressCancel"*/,
            0);
          this = (CombineServantListViewObject_o *)v2->fields.manager;
          if ( this )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)this,
              (System_String_o *)StringLiteral_9984/*"OnLongPushListView"*/,
              (Il2CppObject *)v2->fields.linkItem,
              0);
            return;
          }
        }
      }
    }
    else
    {
      this = (CombineServantListViewObject_o *)sub_1C940C8(v2->fields.linkItem);
    }
    sub_1C93D2C(this, v4);
  }
}


void CombineServantListViewObject__OnLongRelease(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4D2A85C & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    sub_1C93AD4(&StringLiteral_4055/*"CancelDragEnd"*/);
    byte_4D2A85C = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0, 0) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_17;
      UIDragDropListViewItem__PressReset(manager, 0);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[8].fields.m_CancellationTokenSource) )
          return;
        UnityEngine_Component__SendMessage_72091120(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4055/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9984/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
      else
      {
        manager = (UIDragDropListViewItem_o *)sub_1C940C8(manager);
      }
    }
LABEL_17:
    sub_1C93D2C(manager, v4);
  }
}


void CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *itemDraw; // x21
  void *v6; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v8; // x9
  __int64 naturalAligment; // x9
  CombineServantListViewItemDraw_o *v10; // x20
  CombineServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2A853 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A853 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0, 0) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v6 = CombineServantListViewManager_TypeInfo,
           v8 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v8)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_1C940C8(manager);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (v6 = CombineServantListViewItem_TypeInfo,
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
            itemDraw->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v10 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      0),
              !v10) )
        {
          sub_1C93D2C(manager, v6);
        }
        CombineServantListViewItemDraw__SetInput(v10, itemDraw, (unsigned __int8)manager & isInput & 1, 0);
        return;
      }
    }
    v11 = (CombineServantListViewObject_o *)sub_1C940C8(itemDraw);
    CombineServantListViewObject__IsCanDrag(v11, v12);
  }
}


void CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetItem_31904268(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetupDisp(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v10; // x1
  struct UITouchPress_o *v11; // x8
  UnityEngine_Object_o *itemDraw; // x22
  CombineServantListViewItemDraw_o *v13; // x22
  int32_t dispMode; // w19
  CombineServantListViewObject_o *v15; // x0
  int32_t v16; // w1
  System_Action_o *v17; // x2
  const MethodInfo *v18; // x3
  float v19; // s0

  if ( (byte_4D2A857 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItem_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A857 = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
    {
      sub_1C940C8(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewItem_TypeInfo )
  {
LABEL_26:
    v15 = (CombineServantListViewObject_o *)sub_1C940C8(linkItem);
    CombineServantListViewObject__Init_31906060(v15, v16, v17, v19, v18);
    return;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0, 0);
  if ( IsSelectEnable )
  {
    if ( !linkItem )
      goto LABEL_24;
    v11 = this->fields.touchPress;
    if ( !v11 )
      goto LABEL_24;
    v11->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v13 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = CombineServantListViewManager__IsSelectEnable(
                         manager,
                         (CombineServantListViewItem_o *)linkItem,
                         0,
                         0,
                         0,
                         0);
      if ( v13 )
      {
        CombineServantListViewItemDraw__SetItem(
          v13,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0);
        return;
      }
    }
LABEL_24:
    sub_1C93D2C(IsSelectEnable, v10);
  }
}


void CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineServantListViewObject__Init_31903856(this, 2, v2);
}


System_String_o *CombineServantListViewObject__ToString(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4D2A858 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewItemDraw_DispMode_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D2A858 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)CombineServantListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E502DC(&v10, 0, 0, 0);
  return System_String__Concat_64463988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void CombineServantListViewObject__add_callbackFunc(
        CombineServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2A84E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2A84E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewObject_o *)sub_1C940C8(v8);
  CombineServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void CombineServantListViewObject__remove_callbackFunc(
        CombineServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2A84F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2A84F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineServantListViewObject_o *)sub_1C940C8(v8);
  CombineServantListViewObject__Awake(v11, v12);
}
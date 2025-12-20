void SoundPlayerListViewObject___ctor(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D27E35 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D27E35 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SoundPlayerListViewObject__Awake(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D27E2F & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___);
    byte_4D27E2F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___);
  this->fields.itemDraw = (struct SoundPlayerListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


SoundPlayerListViewItem_o *SoundPlayerListViewObject__GetItem(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D27E30 & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerListViewItem_TypeInfo);
    byte_4D27E30 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewItem_TypeInfo )
    return (SoundPlayerListViewItem_o *)this->fields.linkItem;
  return 0;
}


void SoundPlayerListViewObject__Init(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w9
  int32_t v31; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D27E32 & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerListViewItem_TypeInfo);
    byte_4D27E32 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(SoundPlayerListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C942F0(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v30 = 1;
  v31 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v31 = v11;
      goto LABEL_14;
    case 3:
      v31 = 2;
LABEL_14:
      v30 = v11;
LABEL_15:
      this->fields.state = v30;
      this->fields.dispMode = v31;
      goto LABEL_16;
    case 4:
      *(_QWORD *)&this->fields.state = 0x200000001LL;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        SoundPlayerListViewObject__SetupDisp(this, v23);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C9403C(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void SoundPlayerListViewObject__InitItem(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewObject__Init_34499900(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewObject__Init_34501388(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewObject__Init_34501472(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void SoundPlayerListViewObject__SetInput(SoundPlayerListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D27E31 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SoundPlayerListViewItem_TypeInfo);
    byte_4D27E31 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 && !this->fields.itemDraw )
    sub_1C942F0(v6, v7);
}


void SoundPlayerListViewObject__SetItem(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void SoundPlayerListViewObject__SetItem_34502960(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void SoundPlayerListViewObject__SetupDisp(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  SoundPlayerListViewItemDraw_o *v9; // x0

  if ( (byte_4D27E33 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SoundPlayerListViewItem_TypeInfo);
    byte_4D27E33 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v7);
    SoundPlayerListViewItemDraw__SetItem(v9, (SoundPlayerListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void SoundPlayerListViewObject__add_callbackFunc(
        SoundPlayerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D27E2D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D27E2D = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1C9468C(v8);
  SoundPlayerListViewObject__remove_callbackFunc(v11, v12, v13);
}


SoundPlayerListViewItemDraw_o *SoundPlayerListViewObject__getItemDraw(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDraw;
}


void SoundPlayerListViewObject__onClickSelect(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  SoundPlayerListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t sortIndex; // w8
  __int64 *v6; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_4D27E34 & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerListViewItem_TypeInfo);
    sub_1C94098(&Method_SoundPlayerListViewObject_onClickSelect__);
    sub_1C94098(&StringLiteral_22615/*"onClickSelectListView"*/);
    this = (SoundPlayerListViewObject_o *)sub_1C94098(&StringLiteral_22611/*"onClickCheckListView"*/);
    byte_4D27E34 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewItem_TypeInfo )
    {
      goto LABEL_18;
    }
    sortIndex = linkItem[1].fields.sortIndex;
    switch ( sortIndex )
    {
      case 2:
        v7 = Method_SoundPlayerListViewObject_onClickSelect__;
        if ( (*((_BYTE *)Method_SoundPlayerListViewObject_onClickSelect__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C940B0(Method_SoundPlayerListViewObject_onClickSelect__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
        break;
      case 1:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v6 = &StringLiteral_22611/*"onClickCheckListView"*/;
          goto LABEL_17;
        }
LABEL_18:
        sub_1C942F0(this, method);
      case 0:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v6 = &StringLiteral_22615/*"onClickSelectListView"*/;
LABEL_17:
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)*v6,
            (Il2CppObject *)v2,
            0);
          return;
        }
        goto LABEL_18;
    }
  }
}


void SoundPlayerListViewObject__remove_callbackFunc(
        SoundPlayerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D27E2E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D27E2E = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1C9468C(v8);
  SoundPlayerListViewObject__Awake(v11, v12);
}
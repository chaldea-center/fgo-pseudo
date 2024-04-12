void __fastcall WarBoardItemComponent___ctor(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardItemComponent__AssertSerializeFieldNotNull(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Initialize(
        WarBoardItemComponent_o *this,
        WarBoardItemData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  _BOOL8 v7; // x1
  UISprite_o *itemData; // x0
  struct WarBoardItemData_o *v9; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v12; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v14; // x20
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v16; // x2
  struct WarBoardItemData_o *v17; // x8
  int v18; // s0
  UnityEngine_Transform_array *v21; // x20
  UnityEngine_Transform_o *v22; // x21
  const MethodInfo *v23; // x2
  struct WarBoardItemData_o *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AC83C & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&UnityEngine_Transform___TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    byte_42AC83C = 1;
  }
  this->fields.itemData = data;
  sub_B52920(&this->fields.itemData);
  itemData = (UISprite_o *)this->fields.itemData;
  if ( !itemData )
    goto LABEL_28;
  *(_QWORD *)&itemData->fields.updateAnchors = this;
  sub_B52920(&itemData->fields.updateAnchors);
  itemData = this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_28;
  UISprite__set_atlas(itemData, itemIconAtlas, 0LL);
  v9 = this->fields.itemData;
  if ( !v9 )
    goto LABEL_28;
  itemEntity = v9->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_28;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23732/*"{0}"*/, v12, 0LL);
  if ( !itemIcon )
    goto LABEL_28;
  UISprite__set_spriteName(itemIcon, (System_String_o *)itemData, 0LL);
  itemData = this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_28;
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))itemData->klass->vtable._33_MakePixelPerfect.method)(
    itemData,
    itemData->klass->vtable._34_get_minWidth.methodPtr);
  baseImageIcon = (UnityEngine_Object_o *)this->fields.baseImageIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0LL, 0LL) )
  {
    itemData = (UISprite_o *)this->fields.itemData;
    if ( !itemData )
      goto LABEL_28;
    v14 = this->fields.baseImageIcon;
    itemData = (UISprite_o *)WarBoardItemData__get_BaseImageSpriteName(
                               (WarBoardItemData_o *)itemData,
                               (const MethodInfo *)v7);
    if ( !v14 )
      goto LABEL_28;
    UISprite__set_spriteName(v14, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = this->fields.itemData;
  if ( !v17 )
    goto LABEL_28;
  if ( !itemData )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v18 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v17->fields._squareIndex_k__BackingField,
                                     v16);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = (UnityEngine_Transform_array *)sub_B5299C(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_28;
  v22 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = (UISprite_o *)sub_B52A44(itemData, v21->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v26 = sub_B52A7C();
      sub_B52A28(v26, 0LL);
    }
  }
  if ( !v21->max_length )
  {
    v25 = sub_B52A88(itemData);
    sub_B52A28(v25, 0LL);
  }
  v21->m_Items[0] = v22;
  sub_B52920(v21->m_Items);
  WarBoardItemComponent__SetButtonTweenTarget(this, v21, v23);
  itemData = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24 = this->fields.itemData;
  if ( !v24 )
LABEL_28:
    sub_B52A5C(itemData, v7);
  if ( (v24->fields.forceId & 0x80000000) != 0 )
  {
    v7 = 1LL;
    if ( itemData )
      goto LABEL_26;
    goto LABEL_28;
  }
  v7 = (unsigned int)v24->fields.groupId >> 31;
  if ( !itemData )
    goto LABEL_28;
LABEL_26:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemData, v7, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardItemComponent__ItemGetEffectEndCallback(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemComponent_o *v2; // x19
  struct WarBoardItemData_o *itemData; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *leftAnchor; // x20
  const MethodInfo *v6; // x2
  struct WarBoardItemData_o *v7; // x8
  struct UISprite_o *v8; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v11; // x20
  WarBoardManager_o *v12; // x21
  const MethodInfo *v13; // x2
  int v14; // s0

  v2 = this;
  if ( (byte_42AC840 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardItemComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AC840 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    if ( *(_QWORD *)&this[10].fields.m_CachedPtr && v2->fields.isSelectable )
    {
      this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        baseImageIcon = this[4].fields.baseImageIcon;
        if ( baseImageIcon )
        {
          leftAnchor = (System_String_o *)baseImageIcon->fields.leftAnchor;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(leftAnchor, 0LL);
          this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v7 = v2->fields.itemData;
          if ( v7 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v7->fields._squareIndex_k__BackingField,
                v6);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_B52A5C(this, method);
    }
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    v8 = this[4].fields.baseImageIcon;
    if ( !v8 )
      goto LABEL_25;
    bottomAnchor = (System_String_o *)v8->fields.bottomAnchor;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(bottomAnchor, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v11 = v2->fields.itemData;
    v12 = (WarBoardManager_o *)Instance;
    this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    if ( !this )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    if ( !v12 )
      goto LABEL_25;
    WarBoardManager__ShowItemSimplePopup(v12, v11, *(UnityEngine_Vector3_o *)&v14, v13);
  }
}


void __fastcall WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  SimpleAnimation_o *Component_WebViewObject; // x22
  WarBoardSimpleAnimationPerformance_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v10; // x24
  System_Delegate_o *v11; // x0
  WebViewManager_o *Instance; // x19
  WarBoardTaskBase_array *v13; // x21
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_42AC843 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_B52984(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    sub_B52984(&StringLiteral_8308/*"ItemGet"*/);
    byte_42AC843 = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B52A54(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, Component_WebViewObject, (System_String_o *)StringLiteral_8308/*"ItemGet"*/, 0LL);
  if ( !v6 )
    goto LABEL_13;
  EndCallback = (System_Delegate_o *)v6->fields.EndCallback;
  v10 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v11 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v10, 0LL);
  if ( v11 && (WarBoardTaskBase_TaskCallback_c *)v11->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B52D50(v11);
LABEL_15:
    v16 = sub_B52A7C();
    sub_B52A28(v16, 0LL);
  }
  v6->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v11;
  sub_B52920(&v6->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v7 )
LABEL_13:
    sub_B52A5C(v7, v8);
  v13 = (WarBoardTaskBase_array *)v7;
  v14 = sub_B52A44(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v14 )
    goto LABEL_15;
  if ( !v13->max_length )
  {
    v17 = sub_B52A88(v14);
    sub_B52A28(v17, 0LL);
  }
  v13->m_Items[0] = (WarBoardTaskBase_o *)v6;
  sub_B52920(v13->m_Items);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_Component_c *klass; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v7; // x20
  WarBoardManager_o *v8; // x21
  const MethodInfo *v9; // x2
  int v10; // s0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_42AC841 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardItemComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AC841 = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_14;
  if ( ((__int64)klass->_1.byval_arg.data & 0x80000000) != 0 || (HIDWORD(klass->_1.byval_arg.data) & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      baseImageIcon = this[4].fields.baseImageIcon;
      if ( baseImageIcon )
      {
        bottomAnchor = (System_String_o *)baseImageIcon->fields.bottomAnchor;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(bottomAnchor, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v7 = (WarBoardItemData_o *)v2[2].klass;
        v8 = (WarBoardManager_o *)Instance;
        this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform(v2, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          if ( v8 )
          {
            WarBoardManager__ShowItemSimplePopup(v8, v7, *(UnityEngine_Vector3_o *)&v10, v9);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B52A5C(this, method);
  }
}


void __fastcall WarBoardItemComponent__OnUse(
        WarBoardItemComponent_o *this,
        int32_t squareIndex,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  WarBoardItemComponent___c__DisplayClass14_0_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  SimpleAnimation_o *Component_WebViewObject; // x24
  WarBoardSimpleAnimationPerformance_o *v13; // x22
  System_Delegate_o *StartCallback; // x25
  WarBoardTaskBase_TaskCallback_o *v15; // x26
  System_Delegate_o *v16; // x0
  System_Delegate_o *v17; // x8
  System_Delegate_o *EndCallback; // x24
  WarBoardTaskBase_TaskCallback_o *v19; // x25
  System_Delegate_o *v20; // x0
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v22; // x21
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42AC842 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__);
    sub_B52984(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
    sub_B52984(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_B52984(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    sub_B52984(&StringLiteral_8308/*"ItemGet"*/);
    byte_42AC842 = 1;
  }
  v9 = (WarBoardItemComponent___c__DisplayClass14_0_o *)sub_B52A54(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  WarBoardItemComponent___c__DisplayClass14_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields);
  v9->fields.squareIndex = squareIndex;
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v13 = (WarBoardSimpleAnimationPerformance_o *)sub_B52A54(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v13, Component_WebViewObject, (System_String_o *)StringLiteral_8308/*"ItemGet"*/, 0LL);
  if ( !v13 )
    goto LABEL_18;
  StartCallback = (System_Delegate_o *)v13->fields.StartCallback;
  v15 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v16 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v15, 0LL);
  v17 = v16;
  if ( v16 && (WarBoardTaskBase_TaskCallback_c *)v16->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v13->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v16,
        sub_B52920(&v13->fields.StartCallback),
        EndCallback = (System_Delegate_o *)v13->fields.EndCallback,
        v19 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo),
        WarBoardTaskBase_TaskCallback___ctor(
          v19,
          (Il2CppObject *)this,
          Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
          0LL),
        v20 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v19, 0LL),
        (v17 = v20) != 0LL)
    && (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B52D50(v17);
LABEL_20:
    v25 = sub_B52A7C();
    sub_B52A28(v25, 0LL);
  }
  v13->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v20;
  sub_B52920(&v13->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v10 )
LABEL_18:
    sub_B52A5C(v10, v11);
  v22 = (WarBoardTaskBase_array *)v10;
  v23 = sub_B52A44(v13, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v23 )
    goto LABEL_20;
  if ( !v22->max_length )
  {
    v26 = sub_B52A88(v23);
    sub_B52A28(v26, 0LL);
  }
  v22->m_Items[0] = (WarBoardTaskBase_o *)v13;
  sub_B52920(v22->m_Items);
  if ( !Instance )
    goto LABEL_18;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v22, v24);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v22, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct WarBoardItemData_o *itemData; // x8
  int v8; // s0

  if ( (byte_42AC844 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AC844 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v8 = WarBoardManager__GetSquarePosition(
                                          Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          v6),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B52A5C(this, method);
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x19
  UnityEngine_Object_o *v12; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v15; // x0

  if ( (byte_42AC83D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC83D = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_22;
      }
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v12,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v12,
                                                                                                 0LL);
          if ( !v4 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v4,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v15 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B52A28(v15, 0LL);
    }
  }
LABEL_22:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B52920(&button->fields.tweenTargets);
}


void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_42AC83F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC83F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_42AC83E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC83E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B52A5C(this, method);
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__WidgetDepthIncrement(
        WarBoardItemComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardItemComponent_o *v4; // x21
  struct UIWidget_array *uIWidgets; // x8
  struct UIWidget_array **p_uIWidgets; // x20
  int max_length; // w21
  il2cpp_array_size_t v8; // w22
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42AC845 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    byte_42AC845 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    v4->fields.uIWidgets = (struct UIWidget_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                      (UnityEngine_Component_o *)v4,
                                                      1,
                                                      (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52920(&v4->fields.uIWidgets);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= uIWidgets->max_length )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v8];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.itemIcon) + value, 0LL);
      if ( (int)++v8 >= max_length )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_B52A5C(this, *(_QWORD *)&value);
  }
}


void __fastcall WarBoardItemComponent___c__DisplayClass14_0___ctor(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent___c__DisplayClass14_0___OnUse_b__0(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  if ( (byte_42AE900 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AE900 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_B52A5C(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}
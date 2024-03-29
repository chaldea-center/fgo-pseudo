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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UISprite_o *itemData; // x0
  struct WarBoardItemData_o *v12; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  const MethodInfo *v17; // x1
  UISprite_o *v18; // x20
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v20; // x2
  struct WarBoardItemData_o *v21; // x8
  int v22; // s0
  UnityEngine_Transform_array *v25; // x20
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x2
  struct WarBoardItemData_o *v28; // x8
  _BOOL4 v29; // w1
  __int64 v30; // x0
  __int64 v31; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4210DD1 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, data);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&UnityEngine_Transform___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v10);
    byte_4210DD1 = 1;
  }
  this->fields.itemData = data;
  sub_B0D840(&this->fields.itemData, data);
  itemData = (UISprite_o *)this->fields.itemData;
  if ( !itemData )
    goto LABEL_28;
  *(_QWORD *)&itemData->fields.updateAnchors = this;
  sub_B0D840(&itemData->fields.updateAnchors, this);
  itemData = this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_28;
  UISprite__set_atlas(itemData, itemIconAtlas, 0LL);
  v12 = this->fields.itemData;
  if ( !v12 )
    goto LABEL_28;
  itemEntity = v12->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_28;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23617/*"{0}"*/, v15, 0LL);
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
    v18 = this->fields.baseImageIcon;
    itemData = (UISprite_o *)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, v17);
    if ( !v18 )
      goto LABEL_28;
    UISprite__set_spriteName(v18, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v21 = this->fields.itemData;
  if ( !v21 )
    goto LABEL_28;
  if ( !itemData )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v22 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v21->fields._squareIndex_k__BackingField,
                                     v20);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = (UnityEngine_Transform_array *)sub_B0D8BC(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v25 )
    goto LABEL_28;
  v26 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = (UISprite_o *)sub_B0D964(itemData, v25->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v31 = sub_B0D99C();
      sub_B0D948(v31, 0LL);
    }
  }
  if ( !v25->max_length )
  {
    v30 = sub_B0D9A8(itemData);
    sub_B0D948(v30, 0LL);
  }
  v25->m_Items[0] = v26;
  sub_B0D840(v25->m_Items, v26);
  WarBoardItemComponent__SetButtonTweenTarget(this, v25, v27);
  itemData = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = this->fields.itemData;
  if ( !v28 )
LABEL_28:
    sub_B0D97C(itemData);
  if ( (v28->fields.forceId & 0x80000000) != 0 )
  {
    LOBYTE(v29) = 1;
    if ( itemData )
      goto LABEL_26;
    goto LABEL_28;
  }
  v29 = (unsigned int)v28->fields.groupId >> 31;
  if ( !itemData )
    goto LABEL_28;
LABEL_26:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemData, v29, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardItemComponent__ItemGetEffectEndCallback(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemComponent_o *v2; // x19
  __int64 v3; // x1
  struct WarBoardItemData_o *itemData; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *leftAnchor; // x20
  const MethodInfo *v7; // x2
  struct WarBoardItemData_o *v8; // x8
  struct UISprite_o *v9; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  const MethodInfo *v14; // x2
  int v15; // s0

  v2 = this;
  if ( (byte_4210DD5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardItemComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4210DD5 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    if ( *(_QWORD *)&this[10].fields.m_CachedPtr && v2->fields.isSelectable )
    {
      this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v8 = v2->fields.itemData;
          if ( v8 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v8->fields._squareIndex_k__BackingField,
                v7);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_B0D97C(this);
    }
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    v9 = this[4].fields.baseImageIcon;
    if ( !v9 )
      goto LABEL_25;
    bottomAnchor = (System_String_o *)v9->fields.bottomAnchor;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(bottomAnchor, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v12 = v2->fields.itemData;
    v13 = (WarBoardManager_o *)Instance;
    this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    if ( !this )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    if ( !v13 )
      goto LABEL_25;
    WarBoardManager__ShowItemSimplePopup(v13, v12, *(UnityEngine_Vector3_o *)&v15, v14);
  }
}


void __fastcall WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  SimpleAnimation_o *Component_WebViewObject; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardSimpleAnimationPerformance_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v20; // x24
  System_Delegate_o *v21; // x0
  WebViewManager_o *Instance; // x19
  WarBoardTaskBase_array *v23; // x21
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4210DD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v8);
    sub_B0D8A4(&WarBoardSimpleAnimationPerformance_TypeInfo, v9);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_8282/*"ItemGet"*/, v11);
    byte_4210DD8 = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = (WarBoardSimpleAnimationPerformance_o *)sub_B0D974(WarBoardSimpleAnimationPerformance_TypeInfo, v13, v14);
  WarBoardSimpleAnimationPerformance___ctor(v15, Component_WebViewObject, (System_String_o *)StringLiteral_8282/*"ItemGet"*/, 0LL);
  if ( !v15 )
    goto LABEL_13;
  EndCallback = (System_Delegate_o *)v15->fields.EndCallback;
  v20 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v17, v18);
  WarBoardTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v21 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v20, 0LL);
  if ( v21 && (WarBoardTaskBase_TaskCallback_c *)v21->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B0DC70(v21);
LABEL_15:
    v26 = sub_B0D99C();
    sub_B0D948(v26, 0LL);
  }
  v15->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v21;
  sub_B0D840(&v15->fields.EndCallback, v21);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v16 = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v16 )
LABEL_13:
    sub_B0D97C(v16);
  v23 = (WarBoardTaskBase_array *)v16;
  v24 = sub_B0D964(v15, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
  if ( !v24 )
    goto LABEL_15;
  if ( !v23->max_length )
  {
    v27 = sub_B0D9A8(v24);
    sub_B0D948(v27, 0LL);
  }
  v23->m_Items[0] = (WarBoardTaskBase_o *)v15;
  sub_B0D840(v23->m_Items, v15);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v23, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  __int64 v3; // x1
  UnityEngine_Component_c *klass; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  const MethodInfo *v10; // x2
  int v11; // s0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4210DD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardItemComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4210DD6 = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_14;
  if ( ((__int64)klass->_1.byval_arg.data & 0x80000000) != 0 || (HIDWORD(klass->_1.byval_arg.data) & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v8 = (WarBoardItemData_o *)v2[2].klass;
        v9 = (WarBoardManager_o *)Instance;
        this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform(v2, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          if ( v9 )
          {
            WarBoardManager__ShowItemSimplePopup(v9, v8, *(UnityEngine_Vector3_o *)&v11, v10);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnUse(
        WarBoardItemComponent_o *this,
        int32_t squareIndex,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WarBoardItemComponent___c__DisplayClass14_0_o *v18; // x23
  __int64 v19; // x0
  SimpleAnimation_o *Component_WebViewObject; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardSimpleAnimationPerformance_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Delegate_o *StartCallback; // x25
  WarBoardTaskBase_TaskCallback_o *v27; // x26
  System_Delegate_o *v28; // x0
  System_Delegate_o *v29; // x8
  System_Delegate_o *EndCallback; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardTaskBase_TaskCallback_o *v33; // x25
  System_Delegate_o *v34; // x0
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v36; // x21
  __int64 v37; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  __int64 v40; // x0

  if ( (byte_4210DD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v12);
    sub_B0D8A4(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v14);
    sub_B0D8A4(&WarBoardSimpleAnimationPerformance_TypeInfo, v15);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_8282/*"ItemGet"*/, v17);
    byte_4210DD7 = 1;
  }
  v18 = (WarBoardItemComponent___c__DisplayClass14_0_o *)sub_B0D974(
                                                           WarBoardItemComponent___c__DisplayClass14_0_TypeInfo,
                                                           *(_QWORD *)&squareIndex,
                                                           taskList);
  WarBoardItemComponent___c__DisplayClass14_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_18;
  v18->fields.__4__this = this;
  sub_B0D840(&v18->fields, this);
  v18->fields.squareIndex = squareIndex;
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v23 = (WarBoardSimpleAnimationPerformance_o *)sub_B0D974(WarBoardSimpleAnimationPerformance_TypeInfo, v21, v22);
  WarBoardSimpleAnimationPerformance___ctor(v23, Component_WebViewObject, (System_String_o *)StringLiteral_8282/*"ItemGet"*/, 0LL);
  if ( !v23 )
    goto LABEL_18;
  StartCallback = (System_Delegate_o *)v23->fields.StartCallback;
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v24, v25);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v18,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v28 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v27, 0LL);
  v29 = v28;
  if ( v28 && (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v23->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v28,
        sub_B0D840(&v23->fields.StartCallback, v28),
        EndCallback = (System_Delegate_o *)v23->fields.EndCallback,
        v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v31, v32),
        WarBoardTaskBase_TaskCallback___ctor(
          v33,
          (Il2CppObject *)this,
          Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
          0LL),
        v34 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v33, 0LL),
        (v29 = v34) != 0LL)
    && (WarBoardTaskBase_TaskCallback_c *)v34->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B0DC70(v29);
LABEL_20:
    v39 = sub_B0D99C();
    sub_B0D948(v39, 0LL);
  }
  v23->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v34;
  sub_B0D840(&v23->fields.EndCallback, v34);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v19 )
LABEL_18:
    sub_B0D97C(v19);
  v36 = (WarBoardTaskBase_array *)v19;
  v37 = sub_B0D964(v23, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
  if ( !v37 )
    goto LABEL_20;
  if ( !v36->max_length )
  {
    v40 = sub_B0D9A8(v37);
    sub_B0D948(v40, 0LL);
  }
  v36->m_Items[0] = (WarBoardTaskBase_o *)v23;
  sub_B0D840(v36->m_Items, v23);
  if ( !Instance )
    goto LABEL_18;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v36, v38);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v36, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  const MethodInfo *v5; // x2
  struct WarBoardItemData_o *itemData; // x8
  int v7; // s0

  if ( (byte_4210DD9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210DD9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v7 = WarBoardManager__GetSquarePosition(
                                          Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          v5),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B0D97C(this);
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  signed int max_length; // w8
  unsigned int v13; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v15; // x22
  unsigned __int64 v16; // x19
  UnityEngine_Object_o *v17; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v20; // x0

  if ( (byte_4210DD2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, parents);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4210DD2 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v13];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v15 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_22;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)klass )
      {
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + v16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v17,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v17,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v15[1].klass;
        if ( (__int64)++v16 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v20 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B0D948(v20, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B0D840(&button->fields.tweenTargets, ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4210DD4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_4210DD4 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B0D97C(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_4210DD3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_4210DD3 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B0D97C(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B0D97C(this);
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
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  int max_length; // w21
  il2cpp_array_size_t v9; // w22
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4210DDA & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_B0D8A4(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408,
                                        *(_QWORD *)&value);
    byte_4210DDA = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                (UnityEngine_Component_o *)v4,
                                                                1,
                                                                (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B0D840(&v4->fields.uIWidgets, ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= uIWidgets->max_length )
      {
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
      }
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v9];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.itemIcon) + value, 0LL);
      if ( (int)++v9 >= max_length )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_B0D97C(this);
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

  if ( (byte_42126BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42126BE = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_B0D97C(_4__this);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}
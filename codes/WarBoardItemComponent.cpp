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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  _BOOL8 v19; // x1
  UISprite_o *itemData; // x0
  struct WarBoardItemData_o *v21; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v26; // x20
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v28; // x2
  struct WarBoardItemData_o *v29; // x8
  int v30; // s0
  UnityEngine_Transform_array *v33; // x20
  UnityEngine_Transform_o *v34; // x21
  const MethodInfo *v35; // x2
  struct WarBoardItemData_o *v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5256 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)data, (_DWORD)itemIconAtlas, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v16, v17, v18);
    byte_42E5256 = 1;
  }
  this->fields.itemData = data;
  sub_B5D560(&this->fields.itemData);
  itemData = (UISprite_o *)this->fields.itemData;
  if ( !itemData )
    goto LABEL_28;
  *(_QWORD *)&itemData->fields.updateAnchors = this;
  sub_B5D560(&itemData->fields.updateAnchors);
  itemData = this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_28;
  UISprite__set_atlas(itemData, itemIconAtlas, 0LL);
  v21 = this->fields.itemData;
  if ( !v21 )
    goto LABEL_28;
  itemEntity = v21->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_28;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v24, 0LL);
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
    v26 = this->fields.baseImageIcon;
    itemData = (UISprite_o *)WarBoardItemData__get_BaseImageSpriteName(
                               (WarBoardItemData_o *)itemData,
                               (const MethodInfo *)v19);
    if ( !v26 )
      goto LABEL_28;
    UISprite__set_spriteName(v26, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v29 = this->fields.itemData;
  if ( !v29 )
    goto LABEL_28;
  if ( !itemData )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v30 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v29->fields._squareIndex_k__BackingField,
                                     v28);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = (UnityEngine_Transform_array *)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v33 )
    goto LABEL_28;
  v34 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = (UISprite_o *)sub_B5D684(itemData, v33->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v38 = sub_B5D6BC();
      sub_B5D668(v38, 0LL);
    }
  }
  if ( !v33->max_length )
  {
    v37 = sub_B5D6C8(itemData);
    sub_B5D668(v37, 0LL);
  }
  v33->m_Items[0] = v34;
  sub_B5D560(v33->m_Items);
  WarBoardItemComponent__SetButtonTweenTarget(this, v33, v35);
  itemData = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v36 = this->fields.itemData;
  if ( !v36 )
LABEL_28:
    sub_B5D69C(itemData, v19);
  if ( (v36->fields.forceId & 0x80000000) != 0 )
  {
    v19 = 1LL;
    if ( itemData )
      goto LABEL_26;
    goto LABEL_28;
  }
  v19 = (unsigned int)v36->fields.groupId >> 31;
  if ( !itemData )
    goto LABEL_28;
LABEL_26:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemData, v19, 0LL);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardItemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardItemData_o *itemData; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *leftAnchor; // x20
  const MethodInfo *v11; // x2
  struct WarBoardItemData_o *v12; // x8
  struct UISprite_o *v13; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v16; // x20
  WarBoardManager_o *v17; // x21
  const MethodInfo *v18; // x2
  int v19; // s0

  v4 = this;
  if ( (byte_42E525A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardItemComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E525A = 1;
  }
  itemData = v4->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    if ( *(_QWORD *)&this[10].fields.m_CachedPtr && v4->fields.isSelectable )
    {
      this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v12 = v4->fields.itemData;
          if ( v12 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v12->fields._squareIndex_k__BackingField,
                v11);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_B5D69C(this, method);
    }
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    v13 = this[4].fields.baseImageIcon;
    if ( !v13 )
      goto LABEL_25;
    bottomAnchor = (System_String_o *)v13->fields.bottomAnchor;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(bottomAnchor, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v16 = v4->fields.itemData;
    v17 = (WarBoardManager_o *)Instance;
    this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
    if ( !this )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    if ( !v17 )
      goto LABEL_25;
    WarBoardManager__ShowItemSimplePopup(v17, v16, *(UnityEngine_Vector3_o *)&v19, v18);
  }
}


void __fastcall WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  SimpleAnimation_o *Component_WebViewObject; // x22
  WarBoardSimpleAnimationPerformance_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v32; // x24
  System_Delegate_o *v33; // x0
  WebViewManager_o *Instance; // x19
  WarBoardTaskBase_array *v35; // x21
  __int64 v36; // x0
  const MethodInfo *v37; // x3
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_42E525D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, (_DWORD)taskList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v15, v16, v17);
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_8345/*"ItemGet"*/, v24, v25, v26);
    byte_42E525D = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v28 = (WarBoardSimpleAnimationPerformance_o *)sub_B5D694(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v28, Component_WebViewObject, (System_String_o *)StringLiteral_8345/*"ItemGet"*/, 0LL);
  if ( !v28 )
    goto LABEL_13;
  EndCallback = (System_Delegate_o *)v28->fields.EndCallback;
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v33 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v32, 0LL);
  if ( v33 && (WarBoardTaskBase_TaskCallback_c *)v33->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v33);
LABEL_15:
    v38 = sub_B5D6BC();
    sub_B5D668(v38, 0LL);
  }
  v28->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v33;
  sub_B5D560(&v28->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v29 = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v29 )
LABEL_13:
    sub_B5D69C(v29, v30);
  v35 = (WarBoardTaskBase_array *)v29;
  v36 = sub_B5D684(v28, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
  if ( !v36 )
    goto LABEL_15;
  if ( !v35->max_length )
  {
    v39 = sub_B5D6C8(v36);
    sub_B5D668(v39, 0LL);
  }
  v35->m_Items[0] = (WarBoardTaskBase_o *)v28;
  sub_B5D560(v35->m_Items);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v35, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_c *klass; // x8
  struct UISprite_o *baseImageIcon; // x8
  System_String_o *bottomAnchor; // x20
  WebViewManager_o *Instance; // x0
  WarBoardItemData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  const MethodInfo *v14; // x2
  int v15; // s0

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_42E525B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardItemComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E525B = 1;
  }
  klass = v4[2].klass;
  if ( !klass )
    goto LABEL_14;
  if ( ((__int64)klass->_1.byval_arg.data & 0x80000000) != 0 || (HIDWORD(klass->_1.byval_arg.data) & 0x80000000) != 0 )
  {
    this = (WarBoardItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v12 = (WarBoardItemData_o *)v4[2].klass;
        v13 = (WarBoardManager_o *)Instance;
        this = (WarBoardItemComponent_o *)UnityEngine_Component__get_transform(v4, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          if ( v13 )
          {
            WarBoardManager__ShowItemSimplePopup(v13, v12, *(UnityEngine_Vector3_o *)&v15, v14);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  WarBoardItemComponent___c__DisplayClass14_0_o *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  SimpleAnimation_o *Component_WebViewObject; // x24
  WarBoardSimpleAnimationPerformance_o *v40; // x22
  System_Delegate_o *StartCallback; // x25
  WarBoardTaskBase_TaskCallback_o *v42; // x26
  System_Delegate_o *v43; // x0
  System_Delegate_o *v44; // x8
  System_Delegate_o *EndCallback; // x24
  WarBoardTaskBase_TaskCallback_o *v46; // x25
  System_Delegate_o *v47; // x0
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v49; // x21
  __int64 v50; // x0
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  __int64 v53; // x0

  if ( (byte_42E525C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_SimpleAnimation___,
      squareIndex,
      (_DWORD)taskList,
      isInsertTask);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v24, v25, v26);
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_8345/*"ItemGet"*/, v33, v34, v35);
    byte_42E525C = 1;
  }
  v36 = (WarBoardItemComponent___c__DisplayClass14_0_o *)sub_B5D694(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  WarBoardItemComponent___c__DisplayClass14_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_18;
  v36->fields.__4__this = this;
  sub_B5D560(&v36->fields);
  v36->fields.squareIndex = squareIndex;
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v40 = (WarBoardSimpleAnimationPerformance_o *)sub_B5D694(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v40, Component_WebViewObject, (System_String_o *)StringLiteral_8345/*"ItemGet"*/, 0LL);
  if ( !v40 )
    goto LABEL_18;
  StartCallback = (System_Delegate_o *)v40->fields.StartCallback;
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v36,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v43 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v42, 0LL);
  v44 = v43;
  if ( v43 && (WarBoardTaskBase_TaskCallback_c *)v43->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v40->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v43,
        sub_B5D560(&v40->fields.StartCallback),
        EndCallback = (System_Delegate_o *)v40->fields.EndCallback,
        v46 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo),
        WarBoardTaskBase_TaskCallback___ctor(
          v46,
          (Il2CppObject *)this,
          Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
          0LL),
        v47 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v46, 0LL),
        (v44 = v47) != 0LL)
    && (WarBoardTaskBase_TaskCallback_c *)v47->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v44);
LABEL_20:
    v52 = sub_B5D6BC();
    sub_B5D668(v52, 0LL);
  }
  v40->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v47;
  sub_B5D560(&v40->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v37 = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v37 )
LABEL_18:
    sub_B5D69C(v37, v38);
  v49 = (WarBoardTaskBase_array *)v37;
  v50 = sub_B5D684(v40, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
  if ( !v50 )
    goto LABEL_20;
  if ( !v49->max_length )
  {
    v53 = sub_B5D6C8(v50);
    sub_B5D668(v53, 0LL);
  }
  v49->m_Items[0] = (WarBoardTaskBase_o *)v40;
  sub_B5D560(v49->m_Items);
  if ( !Instance )
    goto LABEL_18;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v49, v51);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v49, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct WarBoardItemData_o *itemData; // x8
  int v10; // s0

  if ( (byte_42E525E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E525E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v10 = WarBoardManager__GetSquarePosition(
                                           Instance,
                                           itemData->fields._squareIndex_k__BackingField,
                                           v8),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(Instance, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B5D69C(this, method);
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v25; // x1
  signed int max_length; // w8
  unsigned int v27; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v29; // x22
  unsigned __int64 v30; // x19
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v34; // x0

  if ( (byte_42E5257 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      (_DWORD)parents,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E5257 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v27];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v29 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_22;
      }
      v30 = 0LL;
      while ( v30 < (unsigned int)klass )
      {
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v29[1].monitor + v30);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v31,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v31,
                                                                                                 0LL);
          if ( !v23 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v29[1].klass;
        if ( (__int64)++v30 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v34 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B5D668(v34, 0LL);
    }
  }
LABEL_22:
  if ( !v23
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v25);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B5D560(&button->fields.tweenTargets);
}


void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0
  bool v9; // w1

  if ( (byte_42E5259 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E5259 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    if ( enable )
    {
      v9 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v8, v9, 0, 0LL);
      return;
    }
    if ( v8->fields.mState )
    {
      v9 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v8, 0, 1, 0LL);
  }
}


void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42E5258 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E5258 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UICommonButton__SetButtonEnableAndKeepState(v8, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B5D69C(this, method);
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__WidgetDepthIncrement(
        WarBoardItemComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardItemComponent_o *v5; // x21
  struct UIWidget_array *uIWidgets; // x8
  struct UIWidget_array **p_uIWidgets; // x20
  int max_length; // w21
  il2cpp_array_size_t v9; // w22
  __int64 v10; // x0

  v5 = this;
  if ( (byte_42E525F & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_B5D5C4(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
                                        value,
                                        (_DWORD)method,
                                        v3);
    byte_42E525F = 1;
  }
  p_uIWidgets = &v5->fields.uIWidgets;
  uIWidgets = v5->fields.uIWidgets;
  if ( !uIWidgets )
  {
    v5->fields.uIWidgets = (struct UIWidget_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                      (UnityEngine_Component_o *)v5,
                                                      1,
                                                      (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
    sub_B5D560(&v5->fields.uIWidgets);
    uIWidgets = v5->fields.uIWidgets;
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
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&value);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0

  if ( (byte_42E766C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E766C = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v7 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_B5D69C(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}
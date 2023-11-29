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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct WarBoardItemData_o *itemData; // x0
  UISprite_o *itemIcon; // x0
  struct WarBoardItemData_o *v23; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  struct UISprite_o *v28; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  const MethodInfo *v30; // x1
  WarBoardItemData_o *v31; // x0
  UISprite_o *v32; // x20
  System_String_o *BaseImageSpriteName; // x0
  UnityEngine_Transform_o *transform; // x20
  WebViewManager_o *Instance; // x0
  const MethodInfo *v36; // x2
  struct WarBoardItemData_o *v37; // x8
  int v38; // s0
  __int64 v41; // x2
  UnityEngine_Transform_array *v42; // x20
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  const MethodInfo *v52; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardItemData_o *v54; // x8
  _BOOL4 v55; // w1
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F6420 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, data);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v13);
    sub_B16FFC(&StringLiteral_23445, v14);
    byte_40F6420 = 1;
  }
  this->fields.itemData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)data,
    (System_String_array **)itemIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_28;
  itemData->fields.component = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&itemData->fields.component,
    (System_Int32_array **)this,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_28;
  UISprite__set_atlas(itemIcon, itemIconAtlas, 0LL);
  v23 = this->fields.itemData;
  if ( !v23 )
    goto LABEL_28;
  itemEntity = v23->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_28;
  v25 = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v27 = System_String__Format((System_String_o *)StringLiteral_23445, v26, 0LL);
  if ( !v25 )
    goto LABEL_28;
  UISprite__set_spriteName(v25, v27, 0LL);
  v28 = this->fields.itemIcon;
  if ( !v28 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v28->klass->vtable._33_MakePixelPerfect.method)(
    v28,
    v28->klass->vtable._34_get_minWidth.methodPtr);
  baseImageIcon = (UnityEngine_Object_o *)this->fields.baseImageIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0LL, 0LL) )
  {
    v31 = this->fields.itemData;
    if ( !v31 )
      goto LABEL_28;
    v32 = this->fields.baseImageIcon;
    BaseImageSpriteName = WarBoardItemData__get_BaseImageSpriteName(v31, v30);
    if ( !v32 )
      goto LABEL_28;
    UISprite__set_spriteName(v32, BaseImageSpriteName, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v37 = this->fields.itemData;
  if ( !v37 )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v38 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v37->fields._squareIndex_k__BackingField,
                                     v36);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
  v42 = (UnityEngine_Transform_array *)sub_B17014(UnityEngine_Transform___TypeInfo, 1LL, v41);
  v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v42 )
    goto LABEL_28;
  v51 = (System_Int32_array **)v43;
  if ( v43 )
  {
    v43 = (UnityEngine_Transform_o *)sub_B170BC(v43, v42->obj.klass->_1.element_class);
    if ( !v43 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v42->max_length )
  {
    sub_B17100(v43, v44, v45);
    sub_B170A0();
  }
  v42->m_Items[0] = (UnityEngine_Transform_o *)v51;
  sub_B16F98((BattleServantConfConponent_o *)v42->m_Items, v51, v45, v46, v47, v48, v49, v50);
  WarBoardItemComponent__SetButtonTweenTarget(this, v42, v52);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v54 = this->fields.itemData;
  if ( !v54 )
LABEL_28:
    sub_B170D4();
  if ( (v54->fields.forceId & 0x80000000) != 0 )
  {
    LOBYTE(v55) = 1;
    if ( gameObject )
      goto LABEL_26;
    goto LABEL_28;
  }
  v55 = (unsigned int)v54->fields.groupId >> 31;
  if ( !gameObject )
    goto LABEL_28;
LABEL_26:
  UnityEngine_GameObject__SetActive(gameObject, v55, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardItemComponent__ItemGetEffectEndCallback(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardItemData_o *itemData; // x8
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x0
  void *monitor; // x8
  System_String_o *v8; // x20
  WebViewManager_o *v9; // x0
  const MethodInfo *v10; // x2
  struct WarBoardItemData_o *v11; // x8
  WebViewManager_o *v12; // x0
  void *v13; // x8
  System_String_o *v14; // x20
  WebViewManager_o *v15; // x0
  WarBoardItemData_o *v16; // x20
  WarBoardManager_o *v17; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  int v20; // s0

  if ( (byte_40F6424 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6424 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[7].klass && this->fields.isSelectable )
    {
      v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v6 )
      {
        monitor = v6[3].monitor;
        if ( monitor )
        {
          v8 = (System_String_o *)*((_QWORD *)monitor + 3);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v8, 0LL);
          v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v11 = this->fields.itemData;
          if ( v11 )
          {
            if ( v9 )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)v9,
                v11->fields._squareIndex_k__BackingField,
                v10);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_B170D4();
    }
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v12 )
      goto LABEL_25;
    v13 = v12[3].monitor;
    if ( !v13 )
      goto LABEL_25;
    v14 = (System_String_o *)*((_QWORD *)v13 + 5);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v14, 0LL);
    v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v16 = this->fields.itemData;
    v17 = (WarBoardManager_o *)v15;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(transform, 0LL);
    if ( !v17 )
      goto LABEL_25;
    WarBoardManager__ShowItemSimplePopup(v17, v16, *(UnityEngine_Vector3_o *)&v20, v19);
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
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Delegate_o *v22; // x23
  WarBoardTaskBase_TaskCallback_o *v23; // x24
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewManager_o *Instance; // x19
  __int64 v32; // x2
  __int64 v33; // x0
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x3

  if ( (byte_40F6427 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v8);
    sub_B16FFC(&WarBoardSimpleAnimationPerformance_TypeInfo, v9);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8232, v11);
    byte_40F6427 = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = sub_B170CC(WarBoardSimpleAnimationPerformance_TypeInfo, v13, v14, v15, v16);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v17,
    Component_WebViewObject,
    (System_String_o *)StringLiteral_8232,
    0LL);
  if ( !v17 )
    goto LABEL_13;
  v22 = *(System_Delegate_o **)(v17 + 40);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19, v20, v21);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v24 = (System_Int32_array **)System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0LL);
  if ( v24 && *v24 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v35 = sub_B173C8(v24);
LABEL_15:
    sub_B170F4(v35);
    sub_B170A0();
  }
  *(_QWORD *)(v17 + 40) = v24;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 40), v24, v25, v26, v27, v28, v29, v30);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v33 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v32);
  if ( !v33 )
LABEL_13:
    sub_B170D4();
  v34 = v33;
  v35 = sub_B170BC(v17, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
  if ( !v35 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v34 + 24) )
  {
    sub_B17100(v35, v36, v37);
    sub_B170A0();
  }
  *(_QWORD *)(v34 + 32) = v17;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v17, v37, v38, v39, v40, v41, v42);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v34, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardItemData_o *itemData; // x8
  WebViewManager_o *Instance; // x0
  void *monitor; // x8
  System_String_o *v7; // x20
  WebViewManager_o *v8; // x0
  WarBoardItemData_o *v9; // x20
  WarBoardManager_o *v10; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  int v13; // s0

  if ( (byte_40F6425 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6425 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_14;
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[3].monitor;
      if ( monitor )
      {
        v7 = (System_String_o *)*((_QWORD *)monitor + 5);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v7, 0LL);
        v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v9 = this->fields.itemData;
        v10 = (WarBoardManager_o *)v8;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( transform )
        {
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(transform, 0LL);
          if ( v10 )
          {
            WarBoardManager__ShowItemSimplePopup(v10, v9, *(UnityEngine_Vector3_o *)&v13, v12);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SimpleAnimation_o *Component_WebViewObject; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Delegate_o *v35; // x25
  WarBoardTaskBase_TaskCallback_o *v36; // x26
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x8
  System_Delegate_o *v45; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  WarBoardTaskBase_TaskCallback_o *v50; // x25
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  WebViewManager_o *Instance; // x20
  __int64 v59; // x2
  __int64 v60; // x0
  __int64 v61; // x21
  __int64 v62; // x0
  __int64 v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x3

  if ( (byte_40F6426 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v12);
    sub_B16FFC(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v14);
    sub_B16FFC(&WarBoardSimpleAnimationPerformance_TypeInfo, v15);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v16);
    sub_B16FFC(&StringLiteral_8232, v17);
    byte_40F6426 = 1;
  }
  v18 = sub_B170CC(
          WarBoardItemComponent___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&squareIndex,
          taskList,
          isInsertTask,
          method);
  WarBoardItemComponent___c__DisplayClass14_0___ctor((WarBoardItemComponent___c__DisplayClass14_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_18;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v18 + 24) = squareIndex;
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v30 = sub_B170CC(WarBoardSimpleAnimationPerformance_TypeInfo, v26, v27, v28, v29);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v30,
    Component_WebViewObject,
    (System_String_o *)StringLiteral_8232,
    0LL);
  if ( !v30 )
    goto LABEL_18;
  v35 = *(System_Delegate_o **)(v30 + 32);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v31, v32, v33, v34);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v37 = (System_Int32_array **)System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0LL);
  v44 = v37;
  if ( v37 && *v37 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)(v30 + 32) = v37,
        sub_B16F98((BattleServantConfConponent_o *)(v30 + 32), v37, v38, v39, v40, v41, v42, v43),
        v45 = *(System_Delegate_o **)(v30 + 40),
        v50 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v46, v47, v48, v49),
        WarBoardTaskBase_TaskCallback___ctor(
          v50,
          (Il2CppObject *)this,
          Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
          0LL),
        v51 = (System_Int32_array **)System_Delegate__Combine(v45, (System_Delegate_o *)v50, 0LL),
        (v44 = v51) != 0LL)
    && *v51 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v62 = sub_B173C8(v44);
LABEL_20:
    sub_B170F4(v62);
    sub_B170A0();
  }
  *(_QWORD *)(v30 + 40) = v51;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 40), v51, v52, v53, v54, v55, v56, v57);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v60 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v59);
  if ( !v60 )
LABEL_18:
    sub_B170D4();
  v61 = v60;
  v62 = sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
  if ( !v62 )
    goto LABEL_20;
  if ( !*(_DWORD *)(v61 + 24) )
  {
    sub_B17100(v62, v63, v64);
    sub_B170A0();
  }
  *(_QWORD *)(v61 + 32) = v30;
  sub_B16F98((BattleServantConfConponent_o *)(v61 + 32), (System_Int32_array **)v30, v64, v65, v66, v67, v68, v69);
  if ( !Instance )
    goto LABEL_18;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v61, v70);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v61, v70);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WebViewManager_o *Instance; // x0
  const MethodInfo *v5; // x2
  struct WarBoardItemData_o *itemData; // x8
  int v7; // s0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F6428 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F6428 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v7 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          v5),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B170D4();
  if ( (itemData->fields.forceId & 0x80000000) != 0 || (itemData->fields.groupId & 0x80000000) != 0 )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  unsigned int v17; // w24
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x8
  WarBoardControlPlayTalkUiComponent_array *v20; // x22
  unsigned __int64 v21; // x19
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct UICommonButton_o *button; // x19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F6421 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, parents);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F6421 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          goto LABEL_25;
        v18 = (UnityEngine_Component_o *)parents->m_Items[v17];
        if ( !v18 )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    v18,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          v19 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
          v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)v19 >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_22;
      }
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        v22 = (UnityEngine_Object_o *)v20->m_Items[v21];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_26;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12, (WarBoardManager_TaskList_o *)gameObject, (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(v19) = v20->max_length;
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_21;
      }
LABEL_25:
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v14, v15);
      sub_B170A0();
    }
  }
LABEL_22:
  if ( !v12
    || (button = this->fields.button,
        v26 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B170D4();
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&button->fields.tweenTargets, v26, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_40F6423 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F6423 = 1;
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
      sub_B170D4();
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

  if ( (byte_40F6422 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F6422 = 1;
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
      sub_B170D4();
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *itemData; // x8

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_B170D4();
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
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  UIWidget_o *v16; // x0

  v4 = this;
  if ( (byte_40F6429 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_B16FFC(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968,
                                        *(_QWORD *)&value);
    byte_40F6429 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v4->fields.uIWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= uIWidgets->max_length )
      {
        sub_B17100(this, *(_QWORD *)&value, method);
        sub_B170A0();
      }
      v16 = uIWidgets->m_Items[v15];
      if ( !v16 )
        break;
      UIWidget__set_depth(v16, v16->fields.mDepth + value, 0LL);
      if ( (int)++v15 >= max_length )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x20
  WebViewManager_o *Instance; // x0
  int v8; // s0

  if ( (byte_40F7AE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F7AE9 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(v5, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v8 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)Instance,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
}
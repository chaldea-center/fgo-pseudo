void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B22BC & 1) == 0 )
  {
    sub_B52984(&WarBoardTreasureComponent_TypeInfo);
    byte_42B22BC = 1;
  }
  WarBoardTreasureComponent_TypeInfo->static_fields->RARITY_TYPE = 3;
}


void __fastcall WarBoardTreasureComponent___ctor(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardTreasureComponent__GetAnimationNameByRarity(
        WarBoardTreasureComponent_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureData_o *treasureData; // x0
  int v4; // w8
  System_String_o **v5; // x8

  if ( (byte_42B22BB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13104/*"SrareTreasureGet"*/);
    sub_B52984(&StringLiteral_4219/*"CommonTreasureGet"*/);
    sub_B52984(&StringLiteral_11367/*"RareTreasureGetPlus2"*/);
    sub_B52984(&StringLiteral_13106/*"SrareTreasureGetPlus2"*/);
    sub_B52984(&StringLiteral_13105/*"SrareTreasureGetPlus"*/);
    sub_B52984(&StringLiteral_11365/*"RareTreasureGet"*/);
    sub_B52984(&StringLiteral_4221/*"CommonTreasureGetPlus2"*/);
    sub_B52984(&StringLiteral_4220/*"CommonTreasureGetPlus"*/);
    sub_B52984(&StringLiteral_11366/*"RareTreasureGetPlus"*/);
    byte_42B22BB = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B52A5C(0LL, method);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4219/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_3F0B100 + v4);
  return *v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w21
  WarBoardTreasureComponent_c *v21; // x8
  Il2CppObject *v22; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v24; // x8
  int v25; // s0
  UnityEngine_Transform_array *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  const MethodInfo *v36; // x2
  struct WarBoardTreasureData_o *v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B22B5 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&UnityEngine_Transform___TypeInfo);
    sub_B52984(&WarBoardTreasureComponent_TypeInfo);
    sub_B52984(&StringLiteral_19474/*"icon_drop_item_L_{0:00}"*/);
    byte_42B22B5 = 1;
  }
  this->fields.treasureData = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.treasureData,
    (System_Int32_array **)data,
    (System_String_array **)itemIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  *((_QWORD *)treasureData + 6) = this;
  sub_B52920(
    (BattleServantConfConponent_o *)(treasureData + 48),
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v21 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v21 = WarBoardTreasureComponent_TypeInfo;
  }
  v40 = treasureIconId % v21->static_fields->RARITY_TYPE + 1;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_19474/*"icon_drop_item_L_{0:00}"*/, v22, 0LL);
  if ( !itemIcon )
    goto LABEL_20;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v24 = this->fields.treasureData;
  if ( !v24 )
    goto LABEL_20;
  if ( !treasureData )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v25 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v24->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  v28 = (UnityEngine_Transform_array *)sub_B5299C(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_20;
  v35 = (System_Int32_array **)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_B52A44(treasureData, v28->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v39 = sub_B52A7C(0LL);
      sub_B52A28(v39, 0LL);
    }
  }
  if ( !v28->max_length )
  {
    v38 = sub_B52A88(treasureData);
    sub_B52A28(v38, 0LL);
  }
  v28->m_Items[0] = (UnityEngine_Transform_o *)v35;
  sub_B52920((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v28, v36);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = this->fields.treasureData;
  if ( !v37 || !treasureData )
LABEL_20:
    sub_B52A5C(treasureData, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v37->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *v2; // x19
  struct WarBoardTreasureData_o *treasureData; // x8
  __int64 v4; // x8
  System_String_o *v5; // x20
  struct WarBoardTreasureData_o *v6; // x8

  v2 = this;
  if ( (byte_42B22B9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B22B9 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_17;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_17;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v4 = *(_QWORD *)&this[5].fields.isSelectable;
        if ( v4 )
        {
          v5 = *(System_String_o **)(v4 + 24);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v5, 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v6 = v2->fields.treasureData;
          if ( v6 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v6->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_17:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall WarBoardTreasureComponent__OnUse(
        WarBoardTreasureComponent_o *this,
        int32_t squareIndex,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarBoardMessageMaster_o *v36; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  SimpleAnimation_o *Component_WebViewObject; // x22
  const MethodInfo *v39; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v41; // x21
  const MethodInfo *v42; // x3
  System_Delegate_o *v43; // x23
  WarBoardTaskBase_TaskCallback_o *v44; // x24
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x21
  WarBoardTaskBase_TaskCallback_o *v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WarBoardTreasureComponent_o *v60; // x0
  const MethodInfo *v61; // x1

  if ( (byte_42B22BA & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_B52984(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_B52984(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_42B22BA = 1;
  }
  v6 = sub_B52A54(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  WarBoardTreasureComponent___c__DisplayClass13_0___ctor((WarBoardTreasureComponent___c__DisplayClass13_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_22;
  *(_QWORD *)(v6 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v6 + 24),
    (System_Int32_array **)endCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v6 + 40) = reinforcementsSaveList;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 40), reinforcementsSaveList, v22, v23, v24, v25, v26, v27);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_WarQuestSelectionMaster;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 32), Master_WarQuestSelectionMaster, v30, v31, v32, v33, v34, v35);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_22;
  v36 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v36 )
    goto LABEL_22;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v36, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v39);
  v41 = sub_B52A54(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v41,
    Component_WebViewObject,
    AnimationNameByRarity,
    v42);
  if ( !v41 )
LABEL_22:
    sub_B52A5C(Instance, v8);
  v43 = *(System_Delegate_o **)(v41 + 40);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v45 = (System_Int32_array **)System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0LL);
  if ( !v45 || *v45 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v41 + 40) = v45;
    sub_B52920((BattleServantConfConponent_o *)(v41 + 40), v45, v46, v47, v48, v49, v50, v51);
    if ( v21 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v52 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
      WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v52, 0LL, 0LL);
      v53 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v53,
        (Il2CppObject *)v6,
        Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
        0LL);
      if ( v52 )
      {
        *(_QWORD *)(v52 + 32) = v53;
        sub_B52920((BattleServantConfConponent_o *)(v52 + 32), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18580124(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
            0LL);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  sub_B52D50(v45);
  WarBoardTreasureComponent__GetAnimationNameByRarity(v60, v61);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B52A5C(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0

  if ( (byte_42B22B6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B22B6 = 1;
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
      v21 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B52A28(v21, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_42B22B8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B22B8 = 1;
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


void __fastcall WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_42B22B7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B22B7 = 1;
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


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B52A5C(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___ctor(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_b__1(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL )
    sub_B52A5C(_4__this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *Instance; // x20

  if ( (byte_42AD767 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD767 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  messageMaster = this->fields.messageMaster;
  warBoardData = (WarBoardData_o *)WarBoardData__get_id(warBoardData, 0LL);
  if ( !messageMaster )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)WarBoardMessageMaster__GetMessageTasks(
                                     messageMaster,
                                     (int32_t)warBoardData,
                                     6,
                                     0,
                                     0,
                                     0LL);
  if ( !v3 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)warBoardData,
                                                                9,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    EventTasks,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(warBoardData, v4);
  }
}
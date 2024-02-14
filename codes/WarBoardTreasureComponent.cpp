void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216624 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_4216624 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardTreasureData_o *treasureData; // x0
  int v12; // w8
  System_String_o **v13; // x8

  if ( (byte_4216623 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13051/*"SrareTreasureGet"*/, method);
    sub_B0D8A4(&StringLiteral_4196/*"CommonTreasureGet"*/, v3);
    sub_B0D8A4(&StringLiteral_11307/*"RareTreasureGetPlus2"*/, v4);
    sub_B0D8A4(&StringLiteral_13053/*"SrareTreasureGetPlus2"*/, v5);
    sub_B0D8A4(&StringLiteral_13052/*"SrareTreasureGetPlus"*/, v6);
    sub_B0D8A4(&StringLiteral_11305/*"RareTreasureGet"*/, v7);
    sub_B0D8A4(&StringLiteral_4198/*"CommonTreasureGetPlus2"*/, v8);
    sub_B0D8A4(&StringLiteral_4197/*"CommonTreasureGetPlus"*/, v9);
    sub_B0D8A4(&StringLiteral_11306/*"RareTreasureGetPlus"*/, v10);
    byte_4216623 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B0D97C(0LL);
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4196/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_3E6EE00 + v12);
  return *v13;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w21
  WarBoardTreasureComponent_c *v24; // x8
  Il2CppObject *v25; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v27; // x8
  int v28; // s0
  UnityEngine_Transform_array *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x21
  const MethodInfo *v39; // x2
  struct WarBoardTreasureData_o *v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421661D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, data);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&UnityEngine_Transform___TypeInfo, v12);
    sub_B0D8A4(&WarBoardTreasureComponent_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_19389/*"icon_drop_item_L_{0:00}"*/, v14);
    byte_421661D = 1;
  }
  this->fields.treasureData = data;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)(treasureData + 48),
    (System_Int32_array **)this,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v24 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v24 = WarBoardTreasureComponent_TypeInfo;
  }
  v43 = treasureIconId % v24->static_fields->RARITY_TYPE + 1;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_19389/*"icon_drop_item_L_{0:00}"*/, v25, 0LL);
  if ( !itemIcon )
    goto LABEL_20;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v27 = this->fields.treasureData;
  if ( !v27 )
    goto LABEL_20;
  if ( !treasureData )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v28 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v27->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
  v31 = (UnityEngine_Transform_array *)sub_B0D8BC(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v31 )
    goto LABEL_20;
  v38 = (System_Int32_array **)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_B0D964(treasureData, v31->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v42 = sub_B0D99C(0LL);
      sub_B0D948(v42, 0LL);
    }
  }
  if ( !v31->max_length )
  {
    v41 = sub_B0D9A8(treasureData);
    sub_B0D948(v41, 0LL);
  }
  v31->m_Items[0] = (UnityEngine_Transform_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v31, v39);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40 = this->fields.treasureData;
  if ( !v40 || !treasureData )
LABEL_20:
    sub_B0D97C(treasureData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v40->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *v2; // x19
  __int64 v3; // x1
  struct WarBoardTreasureData_o *treasureData; // x8
  __int64 v5; // x8
  System_String_o *v6; // x20
  struct WarBoardTreasureData_o *v7; // x8

  v2 = this;
  if ( (byte_4216621 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardTreasureComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216621 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_17;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_17;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v5 = *(_QWORD *)&this[5].fields.isSelectable;
        if ( v5 )
        {
          v6 = *(System_String_o **)(v5 + 24);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v6, 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v7 = v2->fields.treasureData;
          if ( v7 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v7->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_17:
      sub_B0D97C(this);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__OnUse(
        WarBoardTreasureComponent_o *this,
        int32_t squareIndex,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  WarBoardData_o *Instance; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WarBoardMessageMaster_o *v51; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  SimpleAnimation_o *Component_WebViewObject; // x22
  const MethodInfo *v54; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x21
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  System_Delegate_o *v62; // x23
  WarBoardTaskBase_TaskCallback_o *v63; // x24
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  WarBoardTaskBase_TaskCallback_o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WarBoardTreasureComponent_o *v83; // x0
  const MethodInfo *v84; // x1

  if ( (byte_4216622 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v14);
    sub_B0D8A4(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v15);
    sub_B0D8A4(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v16);
    sub_B0D8A4(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v18);
    sub_B0D8A4(&WarBoardSimpleAnimationPerformance_TypeInfo, v19);
    byte_4216622 = 1;
  }
  v20 = sub_B0D974(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, *(_QWORD *)&squareIndex, endCallback);
  WarBoardTreasureComponent___c__DisplayClass13_0___ctor((WarBoardTreasureComponent___c__DisplayClass13_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 24) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v20 + 24),
    (System_Int32_array **)endCallback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v20 + 40) = reinforcementsSaveList;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 40), reinforcementsSaveList, v37, v38, v39, v40, v41, v42);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v20 + 32) = Master_WarQuestSelectionMaster;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), Master_WarQuestSelectionMaster, v45, v46, v47, v48, v49, v50);
  Instance = *(WarBoardData_o **)(v20 + 40);
  if ( !Instance )
    goto LABEL_22;
  v51 = *(WarBoardMessageMaster_o **)(v20 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v51 )
    goto LABEL_22;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v51, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v54);
  v58 = sub_B0D974(WarBoardSimpleAnimationPerformance_TypeInfo, v56, v57);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v58,
    Component_WebViewObject,
    AnimationNameByRarity,
    v59);
  if ( !v58 )
LABEL_22:
    sub_B0D97C(Instance);
  v62 = *(System_Delegate_o **)(v58 + 40);
  v63 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v60, v61);
  WarBoardTaskBase_TaskCallback___ctor(
    v63,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v64 = (System_Int32_array **)System_Delegate__Combine(v62, (System_Delegate_o *)v63, 0LL);
  if ( !v64 || *v64 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v58 + 40) = v64;
    sub_B0D840((BattleServantConfConponent_o *)(v58 + 40), v64, v65, v66, v67, v68, v69, v70);
    if ( v36 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v36,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v73 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v71, v72);
      WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v73, 0LL, 0LL);
      v76 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v74, v75);
      WarBoardTaskBase_TaskCallback___ctor(
        v76,
        (Il2CppObject *)v20,
        Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
        0LL);
      if ( v73 )
      {
        *(_QWORD *)(v73 + 32) = v76;
        sub_B0D840((BattleServantConfConponent_o *)(v73 + 32), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v36,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_17750248(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
            0LL);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  v83 = (WarBoardTreasureComponent_o *)sub_B0DC70(v64);
  WarBoardTreasureComponent__GetAnimationNameByRarity(v83, v84);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B0D97C(this);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_421661E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, parents);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421661E = 1;
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
      v26 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B0D948(v26, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4216620 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_4216620 = 1;
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
void __fastcall WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_421661F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_421661F = 1;
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


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *Instance; // x20

  if ( (byte_4211F22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_4211F22 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  if ( !v9 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)warBoardData,
                                                                9,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    EventTasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(warBoardData);
  }
}
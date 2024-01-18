void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418933B & 1) == 0 )
  {
    sub_B2C35C(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_418933B = 1;
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

  if ( (byte_418933A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13007/*"SrareTreasureGet"*/, method);
    sub_B2C35C(&StringLiteral_4181/*"CommonTreasureGet"*/, v3);
    sub_B2C35C(&StringLiteral_11280/*"RareTreasureGetPlus2"*/, v4);
    sub_B2C35C(&StringLiteral_13009/*"SrareTreasureGetPlus2"*/, v5);
    sub_B2C35C(&StringLiteral_13008/*"SrareTreasureGetPlus"*/, v6);
    sub_B2C35C(&StringLiteral_11278/*"RareTreasureGet"*/, v7);
    sub_B2C35C(&StringLiteral_4183/*"CommonTreasureGetPlus2"*/, v8);
    sub_B2C35C(&StringLiteral_4182/*"CommonTreasureGetPlus"*/, v9);
    sub_B2C35C(&StringLiteral_11279/*"RareTreasureGetPlus"*/, v10);
    byte_418933A = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B2C434(0LL, method);
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4181/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_3DF1DA0 + v12);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w21
  WarBoardTreasureComponent_c *v25; // x8
  Il2CppObject *v26; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v28; // x8
  int v29; // s0
  UnityEngine_Transform_array *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  const MethodInfo *v40; // x2
  struct WarBoardTreasureData_o *v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  int v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189334 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B2C35C(&UnityEngine_Transform___TypeInfo, v12);
    sub_B2C35C(&WarBoardTreasureComponent_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_19328/*"icon_drop_item_L_{0:00}"*/, v14);
    byte_4189334 = 1;
  }
  this->fields.treasureData = data;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(treasureData + 48),
    (System_Int32_array **)this,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v25 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v25 = WarBoardTreasureComponent_TypeInfo;
  }
  v44 = treasureIconId % v25->static_fields->RARITY_TYPE + 1;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_19328/*"icon_drop_item_L_{0:00}"*/, v26, 0LL);
  if ( !itemIcon )
    goto LABEL_20;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v28 = this->fields.treasureData;
  if ( !v28 )
    goto LABEL_20;
  if ( !treasureData )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v29 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v28->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
  v32 = (UnityEngine_Transform_array *)sub_B2C374(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v32 )
    goto LABEL_20;
  v39 = (System_Int32_array **)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_B2C41C(treasureData, v32->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v43 = sub_B2C454(0LL);
      sub_B2C400(v43, 0LL);
    }
  }
  if ( !v32->max_length )
  {
    v42 = sub_B2C460(treasureData);
    sub_B2C400(v42, 0LL);
  }
  v32->m_Items[0] = (UnityEngine_Transform_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v39, v33, v34, v35, v36, v37, v38);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v32, v40);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v41 = this->fields.treasureData;
  if ( !v41 || !treasureData )
LABEL_20:
    sub_B2C434(treasureData, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v41->fields._isUse_k__BackingField, 0LL);
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
  if ( (byte_4189338 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardTreasureComponent_o *)sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189338 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_17;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_17;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_B2C434(this, method);
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
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  WarBoardMessageMaster_o *v50; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  SimpleAnimation_o *Component_WebViewObject; // x22
  const MethodInfo *v53; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v55; // x21
  const MethodInfo *v56; // x3
  System_Delegate_o *v57; // x23
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x21
  WarBoardTaskBase_TaskCallback_o *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  WarBoardTreasureComponent_o *v74; // x0
  const MethodInfo *v75; // x1

  if ( (byte_4189339 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v14);
    sub_B2C35C(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v15);
    sub_B2C35C(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v16);
    sub_B2C35C(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v18);
    sub_B2C35C(&WarBoardSimpleAnimationPerformance_TypeInfo, v19);
    byte_4189339 = 1;
  }
  v20 = sub_B2C42C(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  WarBoardTreasureComponent___c__DisplayClass13_0___ctor((WarBoardTreasureComponent___c__DisplayClass13_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v20 + 24),
    (System_Int32_array **)endCallback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v20 + 40) = reinforcementsSaveList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 40), reinforcementsSaveList, v36, v37, v38, v39, v40, v41);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v20 + 32) = Master_WarQuestSelectionMaster;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), Master_WarQuestSelectionMaster, v44, v45, v46, v47, v48, v49);
  Instance = *(WarBoardData_o **)(v20 + 40);
  if ( !Instance )
    goto LABEL_22;
  v50 = *(WarBoardMessageMaster_o **)(v20 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v50 )
    goto LABEL_22;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v50, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v53);
  v55 = sub_B2C42C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v55,
    Component_WebViewObject,
    AnimationNameByRarity,
    v56);
  if ( !v55 )
LABEL_22:
    sub_B2C434(Instance, v22);
  v57 = *(System_Delegate_o **)(v55 + 40);
  v58 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v59 = (System_Int32_array **)System_Delegate__Combine(v57, (System_Delegate_o *)v58, 0LL);
  if ( !v59 || *v59 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v55 + 40) = v59;
    sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 40), v59, v60, v61, v62, v63, v64, v65);
    if ( v35 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v66 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
      WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0LL, 0LL);
      v67 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v67,
        (Il2CppObject *)v20,
        Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
        0LL);
      if ( v66 )
      {
        *(_QWORD *)(v66 + 32) = v67;
        sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 32), (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18201492(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
            0LL);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  v74 = (WarBoardTreasureComponent_o *)sub_B2C728(v59);
  WarBoardTreasureComponent__GetAnimationNameByRarity(v74, v75);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B2C434(this, method);
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
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x19
  UnityEngine_Object_o *v18; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_4189335 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, parents);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4189335 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v16 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_22;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v18,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v18,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v27 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B2C400(v27, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4189337 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_4189337 = 1;
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
      sub_B2C434(0LL, v6);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4189336 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_4189336 = 1;
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
      sub_B2C434(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B2C434(this, method);
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
    sub_B2C434(_4__this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  __int64 v9; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *Instance; // x20

  if ( (byte_4186731 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4186731 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  if ( !v8 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)warBoardData,
                                                                9,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    EventTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(warBoardData, v9);
  }
}
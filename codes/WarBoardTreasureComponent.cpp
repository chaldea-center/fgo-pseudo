void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FBB4E & 1) == 0 )
  {
    sub_B16FFC(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_40FBB4E = 1;
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

  if ( (byte_40FBB4D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12951/*"SrareTreasureGet"*/, method);
    sub_B16FFC(&StringLiteral_4163/*"CommonTreasureGet"*/, v3);
    sub_B16FFC(&StringLiteral_11244/*"RareTreasureGetPlus2"*/, v4);
    sub_B16FFC(&StringLiteral_12953/*"SrareTreasureGetPlus2"*/, v5);
    sub_B16FFC(&StringLiteral_12952/*"SrareTreasureGetPlus"*/, v6);
    sub_B16FFC(&StringLiteral_11242/*"RareTreasureGet"*/, v7);
    sub_B16FFC(&StringLiteral_4165/*"CommonTreasureGetPlus2"*/, v8);
    sub_B16FFC(&StringLiteral_4164/*"CommonTreasureGetPlus"*/, v9);
    sub_B16FFC(&StringLiteral_11243/*"RareTreasureGetPlus"*/, v10);
    byte_40FBB4D = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B170D4();
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4163/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_3D6A8A0 + v12);
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
  struct WarBoardTreasureData_o *treasureData; // x0
  UISprite_o *itemIcon; // x0
  WarBoardTreasureData_o *v23; // x0
  UISprite_o *v24; // x20
  int32_t treasureIconId; // w21
  WarBoardTreasureComponent_c *v26; // x8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_Transform_o *transform; // x20
  WebViewManager_o *Instance; // x0
  struct WarBoardTreasureData_o *v31; // x8
  int v32; // s0
  __int64 v35; // x2
  UnityEngine_Transform_array *v36; // x20
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  const MethodInfo *v46; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardTreasureData_o *v48; // x8
  int v49; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBB47 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v12);
    sub_B16FFC(&WarBoardTreasureComponent_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_19254/*"icon_drop_item_L_{0:00}"*/, v14);
    byte_40FBB47 = 1;
  }
  this->fields.treasureData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureData,
    (System_Int32_array **)data,
    (System_String_array **)itemIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  treasureData->fields.component = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&treasureData->fields.component,
    (System_Int32_array **)this,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_20;
  UISprite__set_atlas(itemIcon, itemIconAtlas, 0LL);
  v23 = this->fields.treasureData;
  if ( !v23 )
    goto LABEL_20;
  v24 = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId(v23, 0LL);
  v26 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v26 = WarBoardTreasureComponent_TypeInfo;
  }
  v49 = treasureIconId % v26->static_fields->RARITY_TYPE + 1;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v28 = System_String__Format((System_String_o *)StringLiteral_19254/*"icon_drop_item_L_{0:00}"*/, v27, 0LL);
  if ( !v24 )
    goto LABEL_20;
  UISprite__set_spriteName(v24, v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v31 = this->fields.treasureData;
  if ( !v31 )
    goto LABEL_20;
  if ( !Instance )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v32 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v31->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v36 = (UnityEngine_Transform_array *)sub_B17014(UnityEngine_Transform___TypeInfo, 1LL, v35);
  v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_20;
  v45 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_Transform_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v36->max_length )
  {
    sub_B17100(v37, v38, v39);
    sub_B170A0();
  }
  v36->m_Items[0] = (UnityEngine_Transform_o *)v45;
  sub_B16F98((BattleServantConfConponent_o *)v36->m_Items, v45, v39, v40, v41, v42, v43, v44);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v36, v46);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = this->fields.treasureData;
  if ( !v48 || !gameObject )
LABEL_20:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, !v48->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardTreasureData_o *treasureData; // x8
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x0
  void *monitor; // x8
  System_String_o *v8; // x20
  WebViewManager_o *v9; // x0
  struct WarBoardTreasureData_o *v10; // x8

  if ( (byte_40FBB4B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBB4B = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_17;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)Instance, 0LL) && this->fields.isSelectable )
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
          v10 = this->fields.treasureData;
          if ( v10 )
          {
            if ( v9 )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)v9,
                v10->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_17:
      sub_B170D4();
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
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x20
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
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x19
  WebViewManager_o *Instance; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **monitor; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WarBoardData_o *v54; // x0
  WarBoardMessageMaster_o *v55; // x22
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  WebViewManager_o *v58; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  SimpleAnimation_o *Component_WebViewObject; // x22
  const MethodInfo *v61; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x21
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Delegate_o *v73; // x23
  WarBoardTaskBase_TaskCallback_o *v74; // x24
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  WarBoardTaskBase_TaskCallback_o *v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  WebViewManager_o *v98; // x0
  WarBoardTreasureComponent_o *v99; // x0
  const MethodInfo *v100; // x1

  if ( (byte_40FBB4C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v15);
    sub_B16FFC(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v16);
    sub_B16FFC(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v17);
    sub_B16FFC(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v18);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v19);
    sub_B16FFC(&WarBoardSimpleAnimationPerformance_TypeInfo, v20);
    byte_40FBB4C = 1;
  }
  v21 = sub_B170CC(
          WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&squareIndex,
          endCallback,
          method,
          v4);
  WarBoardTreasureComponent___c__DisplayClass13_0___ctor((WarBoardTreasureComponent___c__DisplayClass13_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_22;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 24) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)endCallback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  monitor = (System_Int32_array **)Instance[4].monitor;
  *(_QWORD *)(v21 + 40) = monitor;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 40), monitor, v40, v41, v42, v43, v44, v45);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v21 + 32) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), Master_WarQuestSelectionMaster, v48, v49, v50, v51, v52, v53);
  v54 = *(WarBoardData_o **)(v21 + 40);
  if ( !v54 )
    goto LABEL_22;
  v55 = *(WarBoardMessageMaster_o **)(v21 + 32);
  id = WarBoardData__get_id(v54, 0LL);
  if ( !v55 )
    goto LABEL_22;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v55, id, 5, 0, 0, 0LL);
  v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v58 )
    goto LABEL_22;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)v58,
                                                                8,
                                                                0LL,
                                                                0LL);
  if ( !MessageTasks )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    if ( !v38 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v61);
  v67 = sub_B170CC(WarBoardSimpleAnimationPerformance_TypeInfo, v63, v64, v65, v66);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v67,
    Component_WebViewObject,
    AnimationNameByRarity,
    v68);
  if ( !v67 )
LABEL_22:
    sub_B170D4();
  v73 = *(System_Delegate_o **)(v67 + 40);
  v74 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v69, v70, v71, v72);
  WarBoardTaskBase_TaskCallback___ctor(
    v74,
    (Il2CppObject *)v21,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v75 = (System_Int32_array **)System_Delegate__Combine(v73, (System_Delegate_o *)v74, 0LL);
  if ( !v75 || *v75 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v67 + 40) = v75;
    sub_B16F98((BattleServantConfConponent_o *)(v67 + 40), v75, v76, v77, v78, v79, v80, v81);
    if ( v38 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v86 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v82, v83, v84, v85);
      WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v86, 0LL, 0LL);
      v91 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v87, v88, v89, v90);
      WarBoardTaskBase_TaskCallback___ctor(
        v91,
        (Il2CppObject *)v21,
        Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
        0LL);
      if ( v86 )
      {
        *(_QWORD *)(v86 + 32) = v91;
        sub_B16F98((BattleServantConfConponent_o *)(v86 + 32), (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( v98 )
        {
          WarBoardManager__AddTask_18098600(
            (WarBoardManager_o *)v98,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v38,
            0LL);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  v99 = (WarBoardTreasureComponent_o *)sub_B173C8(v75);
  WarBoardTreasureComponent__GetAnimationNameByRarity(v99, v100);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B170D4();
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
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

  if ( (byte_40FBB48 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, parents);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FBB48 = 1;
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
void __fastcall WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_40FBB4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FBB4A = 1;
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
void __fastcall WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_40FBB49 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FBB49 = 1;
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


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this || (gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  int32_t id; // w0
  System_Collections_Generic_IEnumerable_T__o *MessageTasks; // x0
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *v18; // x20
  WarBoardTaskBase_array *v19; // x0

  if ( (byte_40F7885 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_40F7885 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  messageMaster = this->fields.messageMaster;
  id = WarBoardData__get_id(warBoardData, 0LL);
  if ( !messageMaster )
    goto LABEL_11;
  MessageTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardMessageMaster__GetMessageTasks(
                                                                  messageMaster,
                                                                  id,
                                                                  6,
                                                                  0,
                                                                  0,
                                                                  0LL);
  if ( !v11 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    MessageTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                9,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v19 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v18 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v18, v19, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}
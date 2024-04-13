void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC1D & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardTreasureComponent_TypeInfo, v1, v2, v3);
    byte_42EAC1D = 1;
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
  int v2; // w2
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WarBoardTreasureData_o *treasureData; // x0
  int v30; // w8
  System_String_o **v31; // x8

  if ( (byte_42EAC1C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13163/*"SrareTreasureGet"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4252/*"CommonTreasureGet"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11413/*"RareTreasureGetPlus2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13165/*"SrareTreasureGetPlus2"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13164/*"SrareTreasureGetPlus"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11411/*"RareTreasureGet"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_4254/*"CommonTreasureGetPlus2"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_4253/*"CommonTreasureGetPlus"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11412/*"RareTreasureGetPlus"*/, v26, v27, v28);
    byte_42EAC1C = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B5D69C(0LL, method);
  v30 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v30 > 7 )
    v31 = (System_String_o **)&StringLiteral_4252/*"CommonTreasureGet"*/;
  else
    v31 = (System_String_o **)*(&off_3F3FCD0 + v30);
  return *v31;
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w21
  WarBoardTreasureComponent_c *v33; // x8
  Il2CppObject *v34; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v36; // x8
  int v37; // s0
  UnityEngine_Transform_array *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  const MethodInfo *v48; // x2
  struct WarBoardTreasureData_o *v49; // x8
  __int64 v50; // x0
  __int64 v51; // x0
  int v52; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EAC16 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)data, (_DWORD)itemIconAtlas, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WarBoardTreasureComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19572/*"icon_drop_item_L_{0:00}"*/, v20, v21, v22);
    byte_42EAC16 = 1;
  }
  this->fields.treasureData = data;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)(treasureData + 48),
    (System_Int32_array **)this,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_20;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v33 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v33 = WarBoardTreasureComponent_TypeInfo;
  }
  v52 = treasureIconId % v33->static_fields->RARITY_TYPE + 1;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_19572/*"icon_drop_item_L_{0:00}"*/, v34, 0LL);
  if ( !itemIcon )
    goto LABEL_20;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v36 = this->fields.treasureData;
  if ( !v36 )
    goto LABEL_20;
  if ( !treasureData )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v37 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v36->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  v40 = (UnityEngine_Transform_array *)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v40 )
    goto LABEL_20;
  v47 = (System_Int32_array **)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_B5D684(treasureData, v40->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v51 = sub_B5D6BC(0LL);
      sub_B5D668(v51, 0LL);
    }
  }
  if ( !v40->max_length )
  {
    v50 = sub_B5D6C8(treasureData);
    sub_B5D668(v50, 0LL);
  }
  v40->m_Items[0] = (UnityEngine_Transform_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)v40->m_Items, v47, v41, v42, v43, v44, v45, v46);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v40, v48);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v49 = this->fields.treasureData;
  if ( !v49 || !treasureData )
LABEL_20:
    sub_B5D69C(treasureData, v23);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v49->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardTreasureComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardTreasureData_o *treasureData; // x8
  __int64 v9; // x8
  System_String_o *v10; // x20
  struct WarBoardTreasureData_o *v11; // x8

  v4 = this;
  if ( (byte_42EAC1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardTreasureComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAC1A = 1;
  }
  treasureData = v4->fields.treasureData;
  if ( !treasureData )
    goto LABEL_17;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_17;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v4->fields.isSelectable )
    {
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v9 = *(_QWORD *)&this[5].fields.isSelectable;
        if ( v9 )
        {
          v10 = *(System_String_o **)(v9 + 24);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v10, 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v11 = v4->fields.treasureData;
          if ( v11 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v11->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_17:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall WarBoardTreasureComponent__OnUse(
        WarBoardTreasureComponent_o *this,
        int32_t squareIndex,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 v48; // x20
  WarBoardData_o *Instance; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x19
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  WarBoardMessageMaster_o *v78; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  SimpleAnimation_o *Component_WebViewObject; // x22
  const MethodInfo *v81; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v83; // x21
  const MethodInfo *v84; // x3
  System_Delegate_o *v85; // x23
  WarBoardTaskBase_TaskCallback_o *v86; // x24
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x21
  WarBoardTaskBase_TaskCallback_o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  WarBoardTreasureComponent_o *v102; // x0
  const MethodInfo *v103; // x1

  if ( (byte_42EAC1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, squareIndex, (_DWORD)endCallback, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v33, v34, v35);
    sub_B5D5C4(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v36, v37, v38);
    sub_B5D5C4(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance_TypeInfo, v45, v46, v47);
    byte_42EAC1B = 1;
  }
  v48 = sub_B5D694(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  WarBoardTreasureComponent___c__DisplayClass13_0___ctor((WarBoardTreasureComponent___c__DisplayClass13_0_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_22;
  *(_QWORD *)(v48 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 16), (System_Int32_array **)this, v51, v52, v53, v54, v55, v56);
  *(_QWORD *)(v48 + 24) = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v48 + 24),
    (System_Int32_array **)endCallback,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v48 + 40) = reinforcementsSaveList;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 40), reinforcementsSaveList, v64, v65, v66, v67, v68, v69);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v48 + 32) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 32), Master_WarQuestSelectionMaster, v72, v73, v74, v75, v76, v77);
  Instance = *(WarBoardData_o **)(v48 + 40);
  if ( !Instance )
    goto LABEL_22;
  v78 = *(WarBoardMessageMaster_o **)(v48 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v78 )
    goto LABEL_22;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v78, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v63 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v81);
  v83 = sub_B5D694(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v83,
    Component_WebViewObject,
    AnimationNameByRarity,
    v84);
  if ( !v83 )
LABEL_22:
    sub_B5D69C(Instance, v50);
  v85 = *(System_Delegate_o **)(v83 + 40);
  v86 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v86,
    (Il2CppObject *)v48,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v87 = (System_Int32_array **)System_Delegate__Combine(v85, (System_Delegate_o *)v86, 0LL);
  if ( !v87 || *v87 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v83 + 40) = v87;
    sub_B5D560((BattleServantConfConponent_o *)(v83 + 40), v87, v88, v89, v90, v91, v92, v93);
    if ( v63 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v63,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v94 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
      WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v94, 0LL, 0LL);
      v95 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v95,
        (Il2CppObject *)v48,
        Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
        0LL);
      if ( v94 )
      {
        *(_QWORD *)(v94 + 32) = v95;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v94 + 32),
          (System_Int32_array **)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v63,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18807556(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v63,
            0LL);
          return;
        }
      }
    }
    goto LABEL_22;
  }
  sub_B5D990(v87);
  WarBoardTreasureComponent__GetAnimationNameByRarity(v102, v103);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B5D69C(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
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
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0

  if ( (byte_42EAC17 & 1) == 0 )
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
    byte_42EAC17 = 1;
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
      v40 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B5D668(v40, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0
  bool v9; // w1

  if ( (byte_42EAC19 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42EAC19 = 1;
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


void __fastcall WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42EAC18 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42EAC18 = 1;
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


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_B5D69C(this, method);
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
    sub_B5D69C(_4__this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  __int64 v21; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *Instance; // x20

  if ( (byte_42E5FE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    byte_42E5FE0 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  if ( !v20 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)warBoardData,
                                                                9,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    EventTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v20,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(warBoardData, v21);
  }
}
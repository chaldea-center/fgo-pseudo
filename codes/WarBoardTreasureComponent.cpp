void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B13C4E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardTreasureComponent_TypeInfo, v1, v2);
    byte_4B13C4E = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  WarBoardTreasureData_o *treasureData; // x0
  int v21; // w8
  System_String_o **v22; // x8

  if ( (byte_4B13C4D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13082/*"SrareTreasureGet"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_4700/*"CommonTreasureGet"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11290/*"RareTreasureGetPlus2"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_13084/*"SrareTreasureGetPlus2"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_13083/*"SrareTreasureGetPlus"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11288/*"RareTreasureGet"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_4702/*"CommonTreasureGetPlus2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_4701/*"CommonTreasureGetPlus"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11289/*"RareTreasureGetPlus"*/, v18, v19);
    byte_4B13C4D = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BCAA3C(0LL, method);
  v21 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v21 > 7 )
    v22 = (System_String_o **)&StringLiteral_4700/*"CommonTreasureGet"*/;
  else
    v22 = (System_String_o **)*(&off_455AE60 + v21);
  return *v22;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v29; // x1
  WarBoardTreasureComponent_c *v30; // x8
  int32_t v31; // w21
  Il2CppObject *v32; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v34; // x8
  int v35; // s0
  UnityEngine_Transform_array *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x21
  const MethodInfo *v46; // x2
  struct WarBoardTreasureData_o *v47; // x8
  __int64 v48; // x0
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13C47 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, data, itemIconAtlas);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Transform___TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardTreasureComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_20351/*"icon_drop_item_L_{0:00}"*/, v17, v18);
    byte_4B13C47 = 1;
  }
  this->fields.treasureData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.treasureData,
    (int64_t)data,
    (int64_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(treasureData + 48), (int64_t)this, v20, v21, v22, v23, v24, v25);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v30 = WarBoardTreasureComponent_TypeInfo;
  v31 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo, v29);
    v30 = WarBoardTreasureComponent_TypeInfo;
  }
  v49 = v31 % v30->static_fields->RARITY_TYPE + 1;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20351/*"icon_drop_item_L_{0:00}"*/, v32, 0LL);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v34 = this->fields.treasureData;
  if ( !v34 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v35 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v34->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
  v38 = (UnityEngine_Transform_array *)sub_1BCA888(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v38 )
    goto LABEL_19;
  v45 = (int64_t)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1BCA91C(treasureData, v38->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v48 = sub_1BCAA60();
      sub_1BCA908(v48, 0LL);
    }
  }
  if ( !v38->max_length )
    sub_1BCAA44(treasureData, v19);
  v38->m_Items[0] = (UnityEngine_Transform_o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)v38->m_Items, v45, v39, v40, v41, v42, v43, v44);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v38, v46);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = this->fields.treasureData;
  if ( !v47 || !treasureData )
LABEL_19:
    sub_1BCAA3C(treasureData, v19);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v47->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardTreasureComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardTreasureData_o *treasureData; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x20
  __int64 v9; // x8
  struct WarBoardTreasureData_o *v10; // x8

  v3 = this;
  if ( (byte_4B13C4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    this = (WarBoardTreasureComponent_o *)sub_1BCA7E0(&Method_WarBoardTreasureComponent_OnClick__, v4, v5);
    byte_4B13C4B = 1;
  }
  treasureData = v3->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v3->fields.isSelectable )
    {
      v7 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardTreasureComponent_OnClick__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v9 = *(_QWORD *)&this[5].fields.m_CachedPtr;
        if ( v9 )
        {
          OverwriteAssetSoundName__PlaySe(v8, *(System_String_o **)(v9 + 24), 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v10 = v3->fields.treasureData;
          if ( v10 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v10->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_16:
      sub_1BCAA3C(this, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x20
  WarBoardData_o *Instance; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t playedStageReinforcementsList; // x1
  __int64 v60; // x1
  Il2CppObject *Master_object; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  WarBoardMessageMaster_o *v68; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v71; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  int64_t v76; // x21
  __int64 v77; // x2
  __int64 v78; // x3
  _QWORD *v79; // x22
  System_Delegate_o *v80; // x23
  WarBoardTaskBase_TaskCallback_o *v81; // x24
  System_Delegate_o *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x8
  WarBoardTaskBase_TaskCallback_c *v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  int64_t v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  WarBoardTaskBase_TaskCallback_o *v108; // x22
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0

  if ( (byte_4B13C4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex, endCallback);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v24, v25);
    sub_1BCA7E0(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v26, v27);
    sub_1BCA7E0(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v30, v31);
    sub_1BCA7E0(&WarBoardSimpleAnimationPerformance_TypeInfo, v32, v33);
    byte_4B13C4C = 1;
  }
  v34 = sub_1BCAA2C(
          WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&squareIndex,
          endCallback,
          method);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_32;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v34 + 24) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)endCallback, v43, v44, v45, v46, v47, v48);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = (int64_t)Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v34 + 40) = playedStageReinforcementsList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 40), playedStageReinforcementsList, v53, v54, v55, v56, v57, v58);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v34 + 32) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)Master_object, v62, v63, v64, v65, v66, v67);
  Instance = *(WarBoardData_o **)(v34 + 40);
  if ( !Instance )
    goto LABEL_32;
  v68 = *(WarBoardMessageMaster_o **)(v34 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v68 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v68, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v52 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v71);
  v76 = sub_1BCAA2C(WarBoardSimpleAnimationPerformance_TypeInfo, v73, v74, v75);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v76,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0LL);
  if ( !v76 )
LABEL_32:
    sub_1BCAA3C(Instance, v36);
  v79 = (_QWORD *)(v76 + 40);
  v80 = *(System_Delegate_o **)(v76 + 40);
  v81 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v36, v77, v78);
  WarBoardTaskBase_TaskCallback___ctor(
    v81,
    (Il2CppObject *)v34,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v82 = System_Delegate__Combine(v80, (System_Delegate_o *)v81, 0LL);
  v89 = (int64_t)v82;
  if ( v82 )
  {
    v90 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v82->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v79 = v82;
      if ( (WarBoardTaskBase_TaskCallback_c *)v82->klass == v90 )
        goto LABEL_20;
    }
    sub_1BCACFC(v82);
  }
  *v79 = v89;
LABEL_20:
  sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 40), v89, v83, v84, v85, v86, v87, v88);
  if ( !v52 )
    goto LABEL_32;
  items = v52->fields._items;
  v98 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v52->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v52->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      (Il2CppObject *)v76,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v100 = &items->obj.klass + size;
    v52->fields._size = size + 1;
    v100[4] = (Il2CppClass *)v76;
    sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), v76, v91, v92, v93, v94, v95, v96);
  }
  v104 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v101, v102, v103);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v104, 0LL, 0LL);
  v108 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v105, v106, v107);
  WarBoardTaskBase_TaskCallback___ctor(
    v108,
    (Il2CppObject *)v34,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0LL);
  if ( !v104 )
    goto LABEL_32;
  *(_QWORD *)(v104 + 32) = v108;
  sub_1BCA784((PartyOrganizationUtility_o *)(v104 + 32), (int64_t)v108, v109, v110, v111, v112, v113, v114);
  v121 = v52->fields._items;
  v122 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v52->fields._version;
  if ( !v121 )
    goto LABEL_32;
  v123 = v52->fields._size;
  if ( (unsigned int)v123 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      (Il2CppObject *)v104,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
  }
  else
  {
    v124 = &v121->obj.klass + v123;
    v52->fields._size = v123 + 1;
    v124[4] = (Il2CppClass *)v104;
    sub_1BCA784((PartyOrganizationUtility_o *)(v124 + 4), v104, v115, v116, v117, v118, v119, v120);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v52,
    0LL);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BCAA3C(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  unsigned int v21; // w24
  UnityEngine_Component_c *v22; // x8
  int64_t v23; // x22
  unsigned __int64 v24; // x29
  UnityEngine_Object_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  struct UICommonButton_o *button; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B13C48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, parents, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B13C48 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v21];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
        if ( ComponentsInChildren_object )
        {
          v22 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v23 = ComponentsInChildren_object;
          if ( (int)v22 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_24;
      }
      v24 = 0LL;
      while ( v24 < (unsigned int)v22 )
      {
        v25 = *(UnityEngine_Object_o **)(v23 + 32 + 8 * v24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v25,
                                                   0LL);
          if ( !v17 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v17,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v25,
                                                     0LL);
            items = v17->fields._items;
            v33 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v17->fields._size;
            v35 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
            }
          }
        }
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BCAA44(ComponentsInChildren_object, v19);
    }
  }
LABEL_24:
  if ( !v17
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v17,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BCAA3C(ComponentsInChildren_object, v19);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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

  if ( (byte_4B13C4A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C4A = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
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

  if ( (byte_4B13C49 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C49 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(_4__this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B13C4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    byte_4B13C4F = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  if ( !v15 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v15,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(warBoardData, v16);
  }
}
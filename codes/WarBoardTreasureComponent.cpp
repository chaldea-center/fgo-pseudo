void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B645E2 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_4B645E2 = 1;
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

  if ( (byte_4B645E1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_13119/*"SrareTreasureGet"*/, method);
    sub_1BE4ACC(&StringLiteral_4711/*"CommonTreasureGet"*/, v3);
    sub_1BE4ACC(&StringLiteral_11321/*"RareTreasureGetPlus2"*/, v4);
    sub_1BE4ACC(&StringLiteral_13121/*"SrareTreasureGetPlus2"*/, v5);
    sub_1BE4ACC(&StringLiteral_13120/*"SrareTreasureGetPlus"*/, v6);
    sub_1BE4ACC(&StringLiteral_11319/*"RareTreasureGet"*/, v7);
    sub_1BE4ACC(&StringLiteral_4713/*"CommonTreasureGetPlus2"*/, v8);
    sub_1BE4ACC(&StringLiteral_4712/*"CommonTreasureGetPlus"*/, v9);
    sub_1BE4ACC(&StringLiteral_11320/*"RareTreasureGetPlus"*/, v10);
    byte_4B645E1 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BE4D28(0LL, method);
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4711/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_45A39A0 + v12);
  return *v13;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WarBoardTreasureComponent_c *v28; // x8
  int32_t v29; // w21
  Il2CppObject *v30; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v32; // x8
  int v33; // s0
  UnityEngine_Transform_array *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x21
  const MethodInfo *v44; // x2
  struct WarBoardTreasureData_o *v45; // x8
  __int64 v46; // x0
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B645DB & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, data);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1BE4ACC(&UnityEngine_Transform___TypeInfo, v12);
    sub_1BE4ACC(&WarBoardTreasureComponent_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_20419/*"icon_drop_item_L_{0:00}"*/, v14);
    byte_4B645DB = 1;
  }
  this->fields.treasureData = data;
  sub_1BE4A70(
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
  sub_1BE4A70((PartyOrganizationUtility_o *)(treasureData + 48), (int64_t)this, v16, v17, v18, v19, v20, v21);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v28 = WarBoardTreasureComponent_TypeInfo;
  v29 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v28 = WarBoardTreasureComponent_TypeInfo;
  }
  v47 = v29 % v28->static_fields->RARITY_TYPE + 1;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v25, v26, v27);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20419/*"icon_drop_item_L_{0:00}"*/, v30, 0LL);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v32 = this->fields.treasureData;
  if ( !v32 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v33 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v32->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
  v36 = (UnityEngine_Transform_array *)sub_1BE4B74(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_19;
  v43 = (int64_t)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1BE4C08(treasureData, v36->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v46 = sub_1BE4D4C();
      sub_1BE4BF4(v46, 0LL);
    }
  }
  if ( !v36->max_length )
    sub_1BE4D30(treasureData, v15);
  v36->m_Items[0] = (UnityEngine_Transform_o *)v43;
  sub_1BE4A70((PartyOrganizationUtility_o *)v36->m_Items, v43, v37, v38, v39, v40, v41, v42);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v36, v44);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v45 = this->fields.treasureData;
  if ( !v45 || !treasureData )
LABEL_19:
    sub_1BE4D28(treasureData, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v45->fields._isUse_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *v2; // x19
  __int64 v3; // x1
  struct WarBoardTreasureData_o *treasureData; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  __int64 v7; // x8
  struct WarBoardTreasureData_o *v8; // x8

  v2 = this;
  if ( (byte_4B645DF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardTreasureComponent_o *)sub_1BE4ACC(&Method_WarBoardTreasureComponent_OnClick__, v3);
    byte_4B645DF = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      v5 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BE4AE4(Method_WarBoardTreasureComponent_OnClick__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v7 = *(_QWORD *)&this[5].fields.m_CachedPtr;
        if ( v7 )
        {
          OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v8 = v2->fields.treasureData;
          if ( v8 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v8->fields._squareIndex_k__BackingField,
                0LL);
              return;
            }
          }
        }
      }
LABEL_16:
      sub_1BE4D28(this, method);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x19
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  WarBoardMessageMaster_o *v50; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v53; // x1
  System_String_o *AnimationNameByRarity; // x23
  int64_t v55; // x21
  _QWORD *v56; // x22
  System_Delegate_o *v57; // x23
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  System_Delegate_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x8
  WarBoardTaskBase_TaskCallback_c *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  int64_t v78; // x21
  WarBoardTaskBase_TaskCallback_o *v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0

  if ( (byte_4B645E0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1BE4ACC(&WarBoardTaskBase_TaskCallback_TypeInfo, v14);
    sub_1BE4ACC(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v15);
    sub_1BE4ACC(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v16);
    sub_1BE4ACC(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_1BE4ACC(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1BE4ACC(&WarBoardSimpleAnimationPerformance_TypeInfo, v19);
    byte_4B645E0 = 1;
  }
  v20 = sub_1BE4D18(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_32;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = endCallback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)endCallback, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = (int64_t)Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v20 + 40) = playedStageReinforcementsList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 40), playedStageReinforcementsList, v36, v37, v38, v39, v40, v41);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v20 + 32) = Master_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)Master_object, v44, v45, v46, v47, v48, v49);
  Instance = *(WarBoardData_o **)(v20 + 40);
  if ( !Instance )
    goto LABEL_32;
  v50 = *(WarBoardMessageMaster_o **)(v20 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v50 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v50, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v35,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v53);
  v55 = sub_1BE4D18(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v55,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0LL);
  if ( !v55 )
LABEL_32:
    sub_1BE4D28(Instance, v22);
  v56 = (_QWORD *)(v55 + 40);
  v57 = *(System_Delegate_o **)(v55 + 40);
  v58 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v59 = System_Delegate__Combine(v57, (System_Delegate_o *)v58, 0LL);
  v66 = (int64_t)v59;
  if ( v59 )
  {
    v67 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v59->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v56 = v59;
      if ( (WarBoardTaskBase_TaskCallback_c *)v59->klass == v67 )
        goto LABEL_20;
    }
    sub_1BE4FE8(v59);
  }
  *v56 = v66;
LABEL_20:
  sub_1BE4A70((PartyOrganizationUtility_o *)(v55 + 40), v66, v60, v61, v62, v63, v64, v65);
  if ( !v35 )
    goto LABEL_32;
  items = v35->fields._items;
  v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v35->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v55,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v77[4] = (Il2CppClass *)v55;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 4), v55, v68, v69, v70, v71, v72, v73);
  }
  v78 = sub_1BE4D18(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v78, 0LL, 0LL);
  v79 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v79,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0LL);
  if ( !v78 )
    goto LABEL_32;
  *(_QWORD *)(v78 + 32) = v79;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v78 + 32), (int64_t)v79, v80, v81, v82, v83, v84, v85);
  v92 = v35->fields._items;
  v93 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !v92 )
    goto LABEL_32;
  v94 = v35->fields._size;
  if ( (unsigned int)v94 >= v92->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v78,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = &v92->obj.klass + v94;
    v35->fields._size = v94 + 1;
    v95[4] = (Il2CppClass *)v78;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v95 + 4), v78, v86, v87, v88, v89, v90, v91);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_36356260(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
    0LL);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BE4D28(this, method);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *v15; // x8
  int64_t v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  struct UICommonButton_o *button; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B645DC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096, parents);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B645DC = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
        if ( ComponentsInChildren_object )
        {
          v15 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v16 = ComponentsInChildren_object;
          if ( (int)v15 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        v18 = *(UnityEngine_Object_o **)(v16 + 32 + 8 * v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v10,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v28 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BE4D30(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BE4D28(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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

  if ( (byte_4B645DE & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B645DE = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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

  if ( (byte_4B645DD & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B645DD = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(_4__this, method);
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
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B645E3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4B645E3 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_1BE4D28(warBoardData, v9);
  }
}
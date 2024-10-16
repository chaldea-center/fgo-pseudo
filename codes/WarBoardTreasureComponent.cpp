void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB37D2 & 1) == 0 )
  {
    sub_1BAB41C(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_4AB37D2 = 1;
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

  if ( (byte_4AB37D1 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12951/*"SrareTreasureGet"*/, method);
    sub_1BAB41C(&StringLiteral_4631/*"CommonTreasureGet"*/, v3);
    sub_1BAB41C(&StringLiteral_11162/*"RareTreasureGetPlus2"*/, v4);
    sub_1BAB41C(&StringLiteral_12953/*"SrareTreasureGetPlus2"*/, v5);
    sub_1BAB41C(&StringLiteral_12952/*"SrareTreasureGetPlus"*/, v6);
    sub_1BAB41C(&StringLiteral_11160/*"RareTreasureGet"*/, v7);
    sub_1BAB41C(&StringLiteral_4633/*"CommonTreasureGetPlus2"*/, v8);
    sub_1BAB41C(&StringLiteral_4632/*"CommonTreasureGetPlus"*/, v9);
    sub_1BAB41C(&StringLiteral_11161/*"RareTreasureGetPlus"*/, v10);
    byte_4AB37D1 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BAB678(0LL, method);
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4631/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_4502540 + v12);
  return *v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WarBoardTreasureComponent_c *v20; // x8
  int32_t v21; // w21
  Il2CppObject *v22; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v24; // x8
  int v25; // s0
  UnityEngine_Transform_array *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Transform_o *v31; // x21
  const MethodInfo *v32; // x2
  struct WarBoardTreasureData_o *v33; // x8
  __int64 v34; // x0
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB37CB & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, data);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1BAB41C(&UnityEngine_Transform___TypeInfo, v8);
    sub_1BAB41C(&WarBoardTreasureComponent_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_20168/*"icon_drop_item_L_{0:00}"*/, v10);
    byte_4AB37CB = 1;
  }
  this->fields.treasureData = data;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.treasureData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(treasureData + 48), (int32_t)this, v12, v13);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v20 = WarBoardTreasureComponent_TypeInfo;
  v21 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v20 = WarBoardTreasureComponent_TypeInfo;
  }
  v35 = v21 % v20->static_fields->RARITY_TYPE + 1;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v17, v18, v19);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20168/*"icon_drop_item_L_{0:00}"*/, v22, 0LL);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v24 = this->fields.treasureData;
  if ( !v24 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v25 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v24->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  v28 = (UnityEngine_Transform_array *)sub_1BAB4C4(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v31 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1BAB558(treasureData, v28->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v34 = sub_1BAB69C();
      sub_1BAB544(v34, 0LL);
    }
  }
  if ( !v28->max_length )
    sub_1BAB680(treasureData, v11);
  v28->m_Items[0] = v31;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v28->m_Items, (int32_t)v31, v29, v30);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v28, v32);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33 = this->fields.treasureData;
  if ( !v33 || !treasureData )
LABEL_19:
    sub_1BAB678(treasureData, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v33->fields._isUse_k__BackingField, 0LL);
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
  if ( (byte_4AB37CF & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardTreasureComponent_o *)sub_1BAB41C(&Method_WarBoardTreasureComponent_OnClick__, v3);
    byte_4AB37CF = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      v5 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BAB434(Method_WarBoardTreasureComponent_OnClick__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v7 = *(_QWORD *)&this[5].fields.m_CachedPtr;
        if ( v7 )
        {
          OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1BAB678(this, method);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  WarBoardMessageMaster_o *v34; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v37; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v39; // x21
  System_Delegate_o **v40; // x22
  System_Delegate_o *v41; // x23
  WarBoardTaskBase_TaskCallback_o *v42; // x24
  System_Delegate_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Delegate_o *v46; // x8
  WarBoardTaskBase_TaskCallback_c *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x21
  WarBoardTaskBase_TaskCallback_o *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0

  if ( (byte_4AB37D0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1BAB41C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1BAB41C(&WarBoardTaskBase_TaskCallback_TypeInfo, v14);
    sub_1BAB41C(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v15);
    sub_1BAB41C(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v16);
    sub_1BAB41C(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_1BAB41C(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1BAB41C(&WarBoardSimpleAnimationPerformance_TypeInfo, v19);
    byte_4AB37D0 = 1;
  }
  v20 = sub_1BAB668(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_32;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 24) = endCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)endCallback, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v20 + 40) = playedStageReinforcementsList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 40), (int32_t)playedStageReinforcementsList, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v20 + 32) = Master_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)Master_object, v32, v33);
  Instance = *(WarBoardData_o **)(v20 + 40);
  if ( !Instance )
    goto LABEL_32;
  v34 = *(WarBoardMessageMaster_o **)(v20 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v34 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v34, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v37);
  v39 = sub_1BAB668(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v39,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0LL);
  if ( !v39 )
LABEL_32:
    sub_1BAB678(Instance, v22);
  v40 = (System_Delegate_o **)(v39 + 40);
  v41 = *(System_Delegate_o **)(v39 + 40);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1BAB668(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  v46 = v43;
  if ( v43 )
  {
    v47 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v40 = v43;
      if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == v47 )
        goto LABEL_20;
    }
    sub_1BAB938(v43);
  }
  *v40 = v46;
LABEL_20:
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v39 + 40), (int32_t)v46, v44, v45);
  if ( !v27 )
    goto LABEL_32;
  items = v27->fields._items;
  v51 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v27->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v39,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &items->obj.klass + size;
    v27->fields._size = size + 1;
    v53[4] = (Il2CppClass *)v39;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 4), v39, v48, v49);
  }
  v54 = sub_1BAB668(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v54, 0LL, 0LL);
  v55 = (WarBoardTaskBase_TaskCallback_o *)sub_1BAB668(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v55,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0LL);
  if ( !v54 )
    goto LABEL_32;
  *(_QWORD *)(v54 + 32) = v55;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v55, v56, v57);
  v60 = v27->fields._items;
  v61 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v27->fields._version;
  if ( !v60 )
    goto LABEL_32;
  v62 = v27->fields._size;
  if ( (unsigned int)v62 >= v60->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v54,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v27->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v54;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v63 + 4), v54, v58, v59);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_35863260(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v27,
    0LL);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BAB678(this, method);
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
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4AB37CC & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76473248, parents);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    byte_4AB37CC = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2EBB904 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76473248);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_354DC4C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BAB680(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BAB678(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v27,
    v28);
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

  if ( (byte_4AB37CE & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, enable);
    byte_4AB37CE = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BAB678(0LL, v6);
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

  if ( (byte_4AB37CD & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, enable);
    byte_4AB37CD = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BAB678(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1BAB678(this, method);
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
    sub_1BAB678(_4__this, method);
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

  if ( (byte_4AB37D3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4AB37D3 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_1BAB678(warBoardData, v9);
  }
}
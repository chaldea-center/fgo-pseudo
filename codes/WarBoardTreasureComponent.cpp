void __fastcall WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F9FDB & 1) == 0 )
  {
    sub_1B640C8(&WarBoardTreasureComponent_TypeInfo, v1);
    byte_49F9FDB = 1;
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

  if ( (byte_49F9FDA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12858/*"SrareTreasureGet"*/, method);
    sub_1B640C8(&StringLiteral_4610/*"CommonTreasureGet"*/, v3);
    sub_1B640C8(&StringLiteral_11100/*"RareTreasureGetPlus2"*/, v4);
    sub_1B640C8(&StringLiteral_12860/*"SrareTreasureGetPlus2"*/, v5);
    sub_1B640C8(&StringLiteral_12859/*"SrareTreasureGetPlus"*/, v6);
    sub_1B640C8(&StringLiteral_11098/*"RareTreasureGet"*/, v7);
    sub_1B640C8(&StringLiteral_4612/*"CommonTreasureGetPlus2"*/, v8);
    sub_1B640C8(&StringLiteral_4611/*"CommonTreasureGetPlus"*/, v9);
    sub_1B640C8(&StringLiteral_11099/*"RareTreasureGetPlus"*/, v10);
    byte_49F9FDA = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1B64324(0LL);
  v12 = WarBoardTreasureData__get_treasureIconId(treasureData, 0LL) - 1;
  if ( (unsigned int)v12 > 7 )
    v13 = (System_String_o **)&StringLiteral_4610/*"CommonTreasureGet"*/;
  else
    v13 = (System_String_o **)*(&off_44587C0 + v12);
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
  int32_t v11; // w2
  int32_t v12; // w3
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  WarBoardTreasureComponent_c *v16; // x8
  int32_t v17; // w21
  Il2CppObject *v18; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v20; // x8
  int v21; // s0
  UnityEngine_Transform_array *v24; // x20
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x2
  struct WarBoardTreasureData_o *v30; // x8
  __int64 v31; // x0
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9FD4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&UnityEngine_Transform___TypeInfo, v8);
    sub_1B640C8(&WarBoardTreasureComponent_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_20058/*"icon_drop_item_L_{0:00}"*/, v10);
    byte_49F9FD4 = 1;
  }
  this->fields.treasureData = data;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.treasureData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(treasureData + 48), (int32_t)this, v11, v12);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0LL);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0LL);
  v16 = WarBoardTreasureComponent_TypeInfo;
  v17 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v16 = WarBoardTreasureComponent_TypeInfo;
  }
  v32 = v17 % v16->static_fields->RARITY_TYPE + 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20058/*"icon_drop_item_L_{0:00}"*/, v18, 0LL);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v20 = this->fields.treasureData;
  if ( !v20 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v21 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)treasureData,
                                     v20->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  v24 = (UnityEngine_Transform_array *)sub_1B64170(UnityEngine_Transform___TypeInfo, 1LL);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v24 )
    goto LABEL_19;
  v28 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1B64204(treasureData, v24->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v31 = sub_1B64348(0LL);
      sub_1B641F0(v31, 0LL);
    }
  }
  if ( !v24->max_length )
    sub_1B6432C(treasureData, v25);
  v24->m_Items[0] = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v24->m_Items, (int32_t)v28, v26, v27);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v24, v29);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30 = this->fields.treasureData;
  if ( !v30 || !treasureData )
LABEL_19:
    sub_1B64324(treasureData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v30->fields._isUse_k__BackingField, 0LL);
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
  if ( (byte_49F9FD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardTreasureComponent_o *)sub_1B640C8(&Method_WarBoardTreasureComponent_OnClick__, v3);
    byte_49F9FD8 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
    {
      v5 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B640E0(Method_WarBoardTreasureComponent_OnClick__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        v7 = *(_QWORD *)&this[5].fields.m_CachedPtr;
        if ( v7 )
        {
          OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0LL);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1B64324(this);
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  WarBoardMessageMaster_o *v35; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v38; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Delegate_o **v45; // x22
  System_Delegate_o *v46; // x23
  WarBoardTaskBase_TaskCallback_o *v47; // x24
  System_Delegate_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Delegate_o *v51; // x8
  WarBoardTaskBase_TaskCallback_c *v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  WarBoardTaskBase_TaskCallback_o *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0

  if ( (byte_49F9FD9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v14);
    sub_1B640C8(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__, v15);
    sub_1B640C8(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__, v16);
    sub_1B640C8(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1B640C8(&WarBoardSimpleAnimationPerformance_TypeInfo, v19);
    byte_49F9FD9 = 1;
  }
  v20 = sub_1B64314(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo, *(_QWORD *)&squareIndex, endCallback);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_32;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v20 + 24) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)endCallback, v24, v25);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v20 + 40) = playedStageReinforcementsList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 40), (int32_t)playedStageReinforcementsList, v29, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v20 + 32) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)Master_object, v33, v34);
  Instance = *(WarBoardData_o **)(v20 + 40);
  if ( !Instance )
    goto LABEL_32;
  v35 = *(WarBoardMessageMaster_o **)(v20 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0LL);
  if ( !v35 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v35, (int32_t)Instance, 5, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v38);
  v42 = sub_1B64314(WarBoardSimpleAnimationPerformance_TypeInfo, v40, v41);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v42,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0LL);
  if ( !v42 )
LABEL_32:
    sub_1B64324(Instance);
  v45 = (System_Delegate_o **)(v42 + 40);
  v46 = *(System_Delegate_o **)(v42 + 40);
  v47 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v43, v44);
  WarBoardTaskBase_TaskCallback___ctor(
    v47,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0LL);
  v48 = System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0LL);
  v51 = v48;
  if ( v48 )
  {
    v52 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v48->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v45 = v48;
      if ( (WarBoardTaskBase_TaskCallback_c *)v48->klass == v52 )
        goto LABEL_20;
    }
    sub_1B645E4(v48);
  }
  *v45 = v51;
LABEL_20:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 40), (int32_t)v51, v49, v50);
  if ( !v28 )
    goto LABEL_32;
  items = v28->fields._items;
  v56 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v42,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v58[4] = (Il2CppClass *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), v42, v53, v54);
  }
  v61 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v59, v60);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v61, 0LL, 0LL);
  v64 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v62, v63);
  WarBoardTaskBase_TaskCallback___ctor(
    v64,
    (Il2CppObject *)v20,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0LL);
  if ( !v61 )
    goto LABEL_32;
  *(_QWORD *)(v61 + 32) = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 32), (int32_t)v64, v65, v66);
  v69 = v28->fields._items;
  v70 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v28->fields._version;
  if ( !v69 )
    goto LABEL_32;
  v71 = v28->fields._size;
  if ( (unsigned int)v71 >= v69->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v61,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v28->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), v61, v67, v68);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
    0LL);
}


void __fastcall WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1B64324(this);
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

  if ( (byte_49F9FD5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, parents);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F9FD5 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
                                                                     (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__);
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
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B6432C(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B64324(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B6406C(
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
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_49F9FD7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FD7 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
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

  if ( (byte_49F9FD6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FD6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1B64324(this);
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
    sub_1B64324(_4__this);
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
  System_Collections_Generic_List_object__o *v9; // x19
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_49F9FDC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_49F9FDC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v9,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(warBoardData);
  }
}